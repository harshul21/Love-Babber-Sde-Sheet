//Problem Link:- https://www.geeksforgeeks.org/find-shortest-safe-route-in-a-path-with-landmines/
//Code:-
#include<bits/stdc++.h>
using namespace std;

#define R 12
#define C 10

int row[4]={-1,1,0,0};
int col[4]={0,0,-1,1};

bool isValid(int r,int c,int mat[R][C]){
	if(r>=0 and r<R and c>=0 and c<C){
		return true;
	}
	return false;
}

bool isSafe(int r,int c,int vis[R][C],int mat[R][C]){
	if(vis[r][c] || mat[r][c]==0){
		return false;
	}
	return true;
}

void markzero(int mat[R][C]){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			if(mat[i][j]==0){
				for(int k=0;k<4;k++){
					int r=i+row[k];
					int c=j+col[k];
					if(isValid(r,c,mat)){
						mat[r][c]=-1;
					}
				}
			}
		}
	}

	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			if(mat[i][j]==-1){
				mat[i][j]=0;
			}
		}
	}

}

void dfs(int mat[R][C],int &min_dist,int r,int c,int vis[R][C],int count){
	if(c==C-1){
		min_dist=min(min_dist,count);
		return;
	}

	if(count>min_dist){
		return;
	}

	vis[r][c]=1;
	for(int k=0;k<4;k++){
		if(isSafe(r,c,vis,mat) and isValid(r,c,mat)){
			dfs(mat,min_dist,row[k]+r,col[k]+c,vis,count+1);
		}
	}
	vis[R][C]=0;
}
void findShortestPath(int mat[R][C]){

	int min_dist=INT_MAX;
	int vis[R][C];
	markzero(mat);
	for(int i=0;i<R;i++){
		if(mat[i][0]==1){
			memset(vis,0,sizeof vis);
			dfs(mat,min_dist,i,0,vis,0);
			if(min_dist==C-1){
				break;
			}
		}
	}

	if(min_dist==INT_MAX){
		cout<<"Not reachable";
	}
	else{
		cout<<"Distance:"<<min_dist;
	}
}
// Driver code
int main()
{
    // input matrix with landmines shown with number 0
    int mat[R][C] =
    {
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };
 
    // find shortest path
    findShortestPath(mat);
 
    return 0;
}
