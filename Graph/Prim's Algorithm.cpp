//Problem Link:- https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1/#
//Code:-
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int N, vector<vector<int>> adj[])
    {
        // code here
        int parent[N];
        int key[N];
        bool mstset[N];
        
        for(int i=0;i<N;i++){
            key[i]=INT_MAX;
            mstset[i]=false;
            parent[i]=-1;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        key[0]=0;
        pq.push({0,0});
        while(!pq.empty()){
            int u=pq.top().second;
            pq.pop();
            mstset[u]=true;
            for(auto it:adj[u]){
                int v=it[0];
                int weight=it[1];
                if(mstset[v]==false and weight<key[v]){
                    parent[v]=u;
                    key[v]=weight;
                    pq.push({key[v],v});
                }
            }
        }
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=key[i];
        }
        return sum;
    }
};
