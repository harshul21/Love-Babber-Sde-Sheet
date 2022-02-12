//Problem Link:- https://leetcode.com/problems/merge-intervals/
//Time complexity:-O(N*M);
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        if(intervals.size()==1){
            return intervals;
        }
        vector<int> temp=intervals[0];
        vector<vector<int>> ans;
        for(auto it:intervals){
            if(temp[1]>=it[0]){
                temp[1]=max(temp[1],it[1]);
            }
            else{
                ans.push_back(temp);
                temp=it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
