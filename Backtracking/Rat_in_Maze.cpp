//Problem Link:- https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
//Code:-
class Solution{
    public:
    bool isSafe(int r,int c,vector<vector<int>> &m,vector<vector<int>> gridPath){
        if(r<0 or c<0 or r>=m.size() or c>=m.size() or m[r][c]==0 or gridPath[r][c]==1){
            return false;
        }
        return true;
    }
    
    void dfs(int r,int c,vector<vector<int>> m,vector<string> &ans,vector<vector<int>> &gridPath,string &path){
        
        if(r==m.size()-1 and c==m.size()-1){
            if(path.size()>0){
                ans.push_back(path);
            }
            return;
        }
        
        
        gridPath[r][c]=1;
        
        //Up
        if(isSafe(r-1,c,m,gridPath)){
            path+='U';
            dfs(r-1,c,m,ans,gridPath,path);
            path.pop_back();
        }
        
        //down
        if(isSafe(r+1,c,m,gridPath)){
            path+='D';
            dfs(r+1,c,m,ans,gridPath,path);
            path.pop_back();
        }
        
        //left
        if(isSafe(r,c-1,m,gridPath)){
            path+='L';
            dfs(r,c-1,m,ans,gridPath,path);
            path.pop_back();
        }
        
        //right
        if(isSafe(r,c+1,m,gridPath)){
            path+='R';
            dfs(r,c+1,m,ans,gridPath,path);
            path.pop_back();
        }
        gridPath[r][c]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> gridPath(n,vector<int>(n,0));
        string path="";
        if(m[0][0]==0){
            return ans;
        }
        dfs(0,0,m,ans,gridPath,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
