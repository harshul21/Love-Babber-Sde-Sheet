//Problem Link:- https://www.geeksforgeeks.org/print-subsequences-string/
//Time Complexity:- O(2^n)
vector<vector<char>> dfs(string s,int idx,vector<int> &ds,vector<vector<char>> &ans){
    if(idx==s.length()){
        ans.push_back(ds);
        return;
    }
    
    ds.push_back(s[idx]);
    dfs(s,idx+1,ds,ans);
    ds.pop_back();
    
    dfs(s,idx+1,ds,ans);
}
vector<vector<char>> subsequence(string s){
    int idx=0;
    vector<char> ds;
    vector<vector<char>> ans;
    dfs(s,0,ds,ans);
    
}
