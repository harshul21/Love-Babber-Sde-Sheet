//Problem Link:- https://www.hackerrank.com/challenges/journey-to-the-moon/problem
//Code:-
#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[],vector<int> &vis,int &counter){
    vis[node]=1;
    counter++;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,counter);
        }
    }
}
int main(){
    int n,p;
    cin>>n>>p;
    vector<int> adj[n];
    for(int i=0;i<p;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> ans;
    vector<int> vis(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            int counter=0;
            dfs(i,adj,vis,counter);
            ans.push_back(counter);
        }
    }
    int val=(n*(n-1))/2;
    for(int i=0;i<ans.size();i++){
        int x=(ans[i]*(ans[i]-1))/2;
        val-=x;
    }
    cout<<val;
}
