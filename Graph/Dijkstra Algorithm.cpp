//Problem Link:- https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1/#
//Code:-
 class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int src)
    {
        // Code here
        vector<int> ans;
        vector<int> dis(V,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        dis[src]=0;
        pq.push({0,src});
        while(!pq.empty()){
            int v=pq.top().second;
            int d_v=pq.top().first;
            pq.pop();
            
            if(d_v>dis[v]){
                continue;
            }
            
            for(auto edges:adj[v]){
                int to=edges[0];
                int len=edges[1];
                
                if(dis[v]+len<dis[to]){
                    dis[to]=dis[v]+len;
                    pq.push({dis[to],to});
                }
            }
        }
        return dis;
    }
};
