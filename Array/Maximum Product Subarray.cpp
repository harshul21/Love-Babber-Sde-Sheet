//Problem Link:- https://leetcode.com/problems/maximum-product-subarray/submissions/
//Time Complexity:- O(N)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxValue=nums[0];
        int minValue=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxValue,minValue);
            }
            
            maxValue=max(nums[i],maxValue*nums[i]);
            minValue=min(nums[i],minValue*nums[i]);
            ans=max(ans,maxValue);
        }
        return ans;
    }
};
