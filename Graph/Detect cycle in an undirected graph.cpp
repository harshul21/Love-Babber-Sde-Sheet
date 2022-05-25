//Problem Link:- https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#
//Code:-
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool checkforcycle(int s,int V,vector<int> adj[],vector<int> &vis){
        queue<pair<int,int>> q;
        vis[s]=1;
        q.push({s,-1});
        while(!q.empty()){
            int node=q.front().first;
            int prev=q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(prev!=it){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkforcycle(i,V,adj,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};
