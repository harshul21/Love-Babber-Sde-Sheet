//Problem Link:- https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/#
//Code:-
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here
	    vector<int> adj[N];
	    for(auto it:pre){
	        adj[it.first].push_back(it.second);
	    }
	    
	    vector<int> indegree(N,0);
	    for(int i=0;i<N;i++){
	        for(auto it:adj[i]){
	            indegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i=0;i<N;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    int count=0;
	    while(!q.empty()){
	        int node=q.front();
	        count++;
	        q.pop();
	        for(auto it:adj[node]){
	            indegree[it]--;
	            if(indegree[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    if(count==N){
	        return true;
	    }
	    return false;
	}
};
