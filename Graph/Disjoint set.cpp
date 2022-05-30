//Code:-
#include<iostream>
using namespace std;
int parent[1000];
int rank[1000];

void makeset(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		rank[i]=0;
	}
}
int findpar(int node){
	if(node==parent[node]){
		return node;
	}
	return parent[node]=findpar(parent[node]);
}
void union(int u,int v){
	u=findpar(u);
	v=findpar(v);
	if(rank[u]<rank[v]){
		parent[u]=v;
	}
	else if(rank[v]<rank[u]){
		parent[v]=u;
	}
	else{
		parent[v]=u;
		rank[u]++;
	}
}
int main(){
	makeset();
	int m;
	cin>>m;
	while(m--){
		int u,v;
		cin>>u>>v;
		union(u,v);
	}
	if(findpar(2)!=findpar(3)){
		cou<<"Different Components";
	}
	else{
		cout<<"Same Components";
	}
	return 0;
}
