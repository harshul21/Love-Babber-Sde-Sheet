//Problem Link:- https://practice.geeksforgeeks.org/problems/edit-distance3702/1
//Time Complexity:- O(s1*s2)
class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int n=s.length();
        int m=t.length();
        int dp[m+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 or j==0)
                {
                    dp[i][j]=0;
                }
                else if(s[i-1]==t[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return n+m-2*dp[n][m];
    }
};
