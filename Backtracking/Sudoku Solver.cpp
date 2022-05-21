//Problem Link:- https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1#
//Code:-
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool isValid(int row,int col,int grid[N][N],int k){
        for(int i=0;i<9;i++){
            if(grid[i][col]==k){
                return false;
            }
            if(grid[row][i]==k){
                return false;
            }
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==k){
                return false;
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(grid[i][j]==0){
                    for(int k=1;k<=9;k++){
                        if(isValid(i,j,grid,k)){
                            grid[i][j]=k;
                            if(SolveSudoku(grid)){
                                return true;
                            }
                            else{
                                grid[i][j]=0;
                            }
                        }
                    }
                   return false; 
                }
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
       for(int i=0;i<9;i++){
           for(int j=0;j<9;j++){
               cout<<grid[i][j]<<" ";
           }
       }
    }
};
