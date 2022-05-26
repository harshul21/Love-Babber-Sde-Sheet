//Problem Link:- https://practice.geeksforgeeks.org/problems/alien-dictionary/1#
//Code:-
class Solution{
    public:
    
    void dfs(int node,vector<int> &vis,vector<int> adj[],string &ans){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,ans);
            }
        }
        char ch=node+'a';
        ans=ch+ans;
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int> adj[K];
        for(int i=0;i<N-1;i++){
            string s1=dict[i];
            string s2=dict[i+1];
            
            for(int j=0;j<min(s1.length(),s2.length());j++){
                if(s1[j]!=s2[j]){
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        
        vector<int> vis(K,0);
        string ans="";
        for(int i=0;i<K;i++){
            if(!vis[i]){
                dfs(i,vis,adj,ans);
            }
        }
        return ans;
    }
};
