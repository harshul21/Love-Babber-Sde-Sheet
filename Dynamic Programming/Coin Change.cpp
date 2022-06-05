//Problem Link:- https://practice.geeksforgeeks.org/problems/coin-change2448/1#
//Code:-
class Solution {
  public:
    long long int count(int S[], int m, int n) {

        // code here.
        long long dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0){
                    dp[i][j]=(long long)0;
                }
                if(j==0){
                    dp[i][j]=(long long)1;
                }
            }
        }
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(S[i-1]<=j){
                    dp[i][j]=(long long)dp[i][j-S[i-1]]+(long long)dp[i-1][j];
                }
                else{
                    dp[i][j]=(long long)dp[i-1][j];
                }
            }
        }
        return dp[m][n];
    }
};
