//Problem Link:- https://practice.geeksforgeeks.org/problems/topological-sort/1
//Code:-
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void find(int node,vector<int>&vis,stack<int>&s,vector<int> adj[])
	{
	    vis[node]=1;
	    for(auto it:adj[node])
	    {
	        if(!vis[it])
	        {
	            find(it,vis,s,adj);
	        }
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int> s;
	    vector<int> vis(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==0)
	        {
	            find(i,vis,s,adj);
	        }
	    }
	    
	    vector<int> topo;
	    while(!s.empty())
	    {
	        topo.push_back(s.top());
	        s.pop();
	    }
	    return topo;
	}
};
