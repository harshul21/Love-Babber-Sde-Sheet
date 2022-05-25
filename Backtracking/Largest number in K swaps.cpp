//Problem Link:- https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1
//Code:-
class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void dfs(int idx,string str,int n,int k,string &ans){
        if(k==0){
            return;
        }
        
        char maxchar=str[idx];
        for(int i=idx+1;i<n;i++){
            if(maxchar<str[i]){
                maxchar=str[i];
            }
        }
        
        if(maxchar!=str[idx]){
            k--;
        }
        
        for(int i=n-1;i>=idx;i--){
            if(str[i]==maxchar){
                swap(str[idx],str[i]);
                if(ans<str){
                    ans=str;
                }
                dfs(idx+1,str,n,k,ans);
                swap(str[idx],str[i]);
            }
        }
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans=str;
       int n=str.length();
       dfs(0,str,n,k,ans);
       return ans;
       
    }
};
