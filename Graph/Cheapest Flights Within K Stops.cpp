//Problem link:- https://leetcode.com/problems/cheapest-flights-within-k-stops/
//Code:-
class Solution {
public:
    int res;
    void dfs(int n,vector<vector<int>> &arr,int src,int dst,int k,int cost,vector<bool> &vis){
        if(dst==src and k>=0){
            res=min(cost,res);
            return;
        }
        if(k<0){
            return;
        }
        for(int i=0;i<n;i++){
            if(!vis[i] and arr[src][i]!=0){
                vis[i]=true;
                dfs(n,arr,i,dst,k-1,cost+arr[src][i],vis);
                vis[i]=false;
            }
        }
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        res=INT_MAX;
        vector<vector<int>> arr(n,vector<int>(n,0));
        for(auto it:flights){
            arr[it[0]][it[1]]=it[2];
        }
        vector<bool> vis(n,false);
        vis[src]=true;
        dfs(n,arr,src,dst,k+1,0,vis);
        return (res==INT_MAX)?-1:res;
    }
};
