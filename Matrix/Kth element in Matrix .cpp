//Problem Link:- https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1
//Time Complexity:- K*log(N)
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int,vector<int>,greater<int>> pq;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          pq.push(mat[i][j]);
      }
  }
  while(k>1){
      pq.pop();
      k--;
  }
  return pq.top();
}
