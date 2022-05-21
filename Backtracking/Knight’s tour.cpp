//Problem Link:- https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/
//Code:-

#include<bits/stdc++.h>
using namespace std;
int n=8;
int print(vector<vector<int>> &sol){

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool isSafe(int r,int c,vector<vector<int>> sol){
	if(r<0 or c<0 or r>=n or c>=n or sol[r][c]!=-1){
		return false;
	}
	return true;
}
bool solveKTUtil(int x,int y,int movei,vector<vector<int>> &sol,int xMove[],int yMove[]){
	int k,next_x,next_y;
	if(movei==n*n){
		return 1;
	}

	for(int k=0;k<8;k++){
		next_x=x+xMove[k];
		next_y=y+yMove[k];
		if(isSafe(next_x,next_y,sol)){
			sol[next_x][next_y]=movei;
			if(solveKTUtil(next_x,next_y,movei+1,sol,xMove,yMove)){
				return 1;
			}
			else{
				sol[next_x][next_y]=-1;
			}
		}
	}
	return false;
}
int main(){
	vector<vector<int>> sol(n,vector<int>(n,-1));

	int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    sol[0][0]=0;

    if(!solveKTUtil(0,0,1,sol,xMove,yMove)){
    	cout<<"Solution doesn't exist";
    }
    else{
    	print(sol);
    }

	return 0;
}

