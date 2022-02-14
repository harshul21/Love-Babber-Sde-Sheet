//Problem Link:- https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1#
//Time Complexity:- O(n*m)
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat) {
        // code here
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                ans.push_back(mat[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=ans[k];
                k++;
            }
        }
        return mat;
    }
};
