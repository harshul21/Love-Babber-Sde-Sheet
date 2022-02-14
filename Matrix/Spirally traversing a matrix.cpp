//Problem Link:- https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1#
//Time Complexity-O(R*C)
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int row1=0;
        int row2=r-1;
        int col1=0;
        int col2=c-1;
        vector<int> ans;
        while(row1<=row2 and col1<=col2){
            for(int col=col1;col<=col2;col++){
                ans.push_back(matrix[row1][col]);
            }
            row1++;
            
            if(row1>row2 or col1>col2){
                break;
            }
            
            for(int row=row1;row<=row2;row++){
                ans.push_back(matrix[row][col2]);
            }
            col2--;
            
            if(row1>row2 or col1>col2){
                break;
            }
            
            for(int col=col2;col>=col1;col--){
                ans.push_back(matrix[row2][col]);
            }
            row2--;
            
            if(row1>row2 or col1>col2){
                break;
            }
            
            for(int row=row2;row>=row1;row--){
                ans.push_back(matrix[row][col1]);
            }
            col1++;
            
            if(row1>row2 or col1>col2){
                break;
            }
            
        }
        return ans;
    }
};
