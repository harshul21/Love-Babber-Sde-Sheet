//Note:- on GFG test cases are not correct
//Problem Link:- https://leetcode.com/problems/permutations/
//Time Complexity:- 2^n * n!
//Approach 1:- With extra space
class Solution {
public:
    void dfs(vector<int> nums,vector<vector<int>> &ans,vector<int> ds,int freq[])
    {
        if(nums.size()==ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                dfs(nums,ans,ds,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      
        int n=nums.size();
        int freq[n];
        for(int i=0;i<n;i++)
        {
            freq[i]=0;
        }
        vector<int> ds;
        dfs(nums,ans,ds,freq);
        return ans;         
    }
};
//Approach 2:- Without extra space
class Solution {
public:
    void dfs(int idx, vector<int> &nums,vector<vector<int>> &ans)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            dfs(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> ds;
        dfs(0,nums,ans);
        return ans;         
    }
};
