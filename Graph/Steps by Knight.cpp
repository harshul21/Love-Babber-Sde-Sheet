//Problem Link:- https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1#
//Code:-
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int sx=KnightPos[0];
	    int sy=KnightPos[1];
	    
	    int tx=TargetPos[0];
	    int ty=TargetPos[1];
	    
	    int arr[N][N];
	    
	    for(int i=0;i<N;i++){
	        for(int j=0;j<N;j++){
	            arr[i][j]=0;
	        }
	    }
	    queue<pair<int,int>> q;
	    q.push({sx-1,sy-1});
	    
	    while(!q.empty()){
	        auto curr=q.front();
	        int i=curr.first;
	        int j=curr.second;
	        q.pop();
	        
	        if((i-2)>=0 and (i-2)<N and (j-1)>=0 and j-1<N and arr[i-2][j-1]==0){
	            arr[i-2][j-1]=1+arr[i][j];
	            q.push({i-2,j-1});
	        }
	        if((i-1)>=0 and (i-1)<N and (j-2)>=0 and j-2<N and arr[i-1][j-2]==0){
	            arr[i-1][j-2]=1+arr[i][j];
	            q.push({i-1,j-2});
	        }
	        if((i+1)>=0 and (i+1)<N and (j-2)>=0 and j-2<N and arr[i+1][j-2]==0){
	            arr[i+1][j-2]=1+arr[i][j];
	            q.push({i+1,j-2});
	        }
	        if((i+2)>=0 and (i+2)<N and (j-1)>=0 and j-1<N and arr[i+2][j-1]==0){
	            arr[i+2][j-1]=1+arr[i][j];
	            q.push({i+2,j-1});
	        }
	        if((i-2)>=0 and (i-2)<N and (j+1)>=0 and j+1<N and arr[i-2][j+1]==0){
	            arr[i-2][j+1]=1+arr[i][j];
	            q.push({i-2,j+1});
	        }
	        if((i-1)>=0 and (i-1)<N and (j+2)>=0 and j+2<N and arr[i-1][j+2]==0){
	            arr[i-1][j+2]=1+arr[i][j];
	            q.push({i-1,j+2});
	        }
	        if((i+1)>=0 and (i+1)<N and (j+2)>=0 and j+2<N and arr[i+1][j+2]==0){
	            arr[i+1][j+2]=1+arr[i][j];
	            q.push({i+1,j+2});
	        }
	        if((i+2)>=0 and (i+2)<N and (j+1)>=0 and j+1<N and arr[i+2][j+1]==0){
	            arr[i+2][j+1]=1+arr[i][j];
	            q.push({i+2,j+1});
	        }
	        
	    }
	    
	    return arr[tx-1][ty-1];
	}
};
