//Problem Link:- https://practice.geeksforgeeks.org/problems/bipartite-graph/1/#
//Code:-
class Solution {
public:
    bool dfs(int node,int color[],vector<int> adj[]){
        if(color[node]==-1){
            color[node]=1;
        }
        for(auto it:adj[node]){
            if(color[it]==-1){
                color[it]=1-color[node];
                if(!dfs(it,color,adj)){
                    return false;
                }
            }
            else if(color[it]==color[node]){
                return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int color[V];
	    memset(color,-1,sizeof(color));
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(!dfs(i,color,adj)){
	                return false;
	            }
	        }
	    }
	    return true;
	}

};
