//Problem Link:- https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
//Code:-
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> ans;
        queue<int> q;
        q.push(0);
	    vis[0]=true;
	    while(!q.empty())
	    {
	        int node=q.front();
	        q.pop();
	        ans.push_back(node);
	        for(auto it:adj[node])
	        {
	            
	            if(!vis[it])
	            {
	                vis[it]=true;
	                q.push(it);
	            }
	        }
	    }
        
        return ans;
    }
};
