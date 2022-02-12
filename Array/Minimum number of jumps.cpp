//Problem Link:-https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#

//Approach 1:- Using additonal space giving TLE
//Time Complexity:- O(N)
//Space Complexity:- O(N)
class Solution{
  public:
    int minJumps(int arr[], int n){
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(dp[j]!=INT_MAX and (arr[j]+j>=i)){
                    if(dp[j]+1<dp[i]){
                        dp[i]=dp[j]+1;
                    }
                }
            }
        }
        if(dp[n-1]!=INT_MAX){
            return dp[n-1];
        }
        return -1;
    }
};

//Approach 2:- Without extra space running perfectly
//Time Complexity:- O(N)
//Space Complexity:- O(1)
class Solution{
  public:
    int minJumps(int arr[], int n){
        //Space Optimised
        int count=0,curr_s=0,maxj=0;
        for(int i=0;i<n-1;i++){
            maxj=max(maxj,i+arr[i]);
            if(i==curr_s){
                count++;
                curr_s=maxj;
            }
            if(arr[i]==0 and i==curr_s){
                return -1;
            }
        }
        return count;
    }
};
