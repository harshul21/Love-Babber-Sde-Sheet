//Problem Statement:- https://practice.geeksforgeeks.org/problems/find-all-possible-palindromic-partitions-of-a-string/1/#
//Code:-
class Solution {
  public:
  bool validPalindrome(int start,int end,string str){
      while(start<=end){
          if(str[start++]!=str[end--]){
              return false;
          }
      }
      return true;
  }
  void dfs(int idx,string str,vector<vector<string>> &ans,vector<string>& path){
      if(idx==str.size()){
          ans.push_back(path);
          return;
      }
      for(int i=idx;i<str.size();i++){
          if(validPalindrome(idx,i,str)){
              path.push_back(str.substr(idx,i-idx+1));
              dfs(i+1,str,ans,path);
              path.pop_back();
          }
      }
  }
    vector<vector<string>> allPalindromicPerms(string str) {
        vector<vector<string>> ans;
        vector<string> path;
        dfs(0,str,ans,path);
        return ans;
    }
};
