//Problem Statement:- https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1#
//Code:-
class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void dfs(int idx,vector<int> arr,int sum,vector<vector<int>> &ans,vector<int> &ds){
       if(sum==0){
           ans.push_back(ds);
           return;
       }
       
       if(idx==arr.size() or sum<0){
           return;
       }
       unordered_map<int,int> mp;
       for(int i=idx;i<arr.size();i++){
           if(mp.find(arr[i])!=mp.end()){
               continue;
           }
           ds.push_back(arr[i]);
           mp[arr[i]]++;
           dfs(i,arr,sum-arr[i],ans,ds);
           ds.pop_back();
       }
    }
    vector<vector<int> > combinationSum(vector<int> &arr, int sum) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(arr.begin(),arr.end());
        dfs(0,arr,sum,ans,ds);
        return ans;
    }
};
