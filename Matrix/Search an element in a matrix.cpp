//Problem Link:- https://leetcode.com/problems/search-a-2d-matrix/
//Time Complexity:- O(N*M)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=col-1;
        while(i>=0 and j>=0 and i<row and j<col){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else if(matrix[i][j]<target){
                i++;
            }
        }
        return false;
    }
};
