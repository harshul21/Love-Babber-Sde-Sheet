//Problem Link:- https://practice.geeksforgeeks.org/problems/next-permutation5226/1#
//Time Complexity:- O(N)
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> nums){
        int n=nums.size();
        int k;
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int l=n-1;l>k;l--){
                if(nums[l]>nums[k]){
                    swap(nums[l],nums[k]);
                    break;
                }
                
            }
            reverse(nums.begin()+k+1,nums.end());
        }
        return nums;
    }
};
