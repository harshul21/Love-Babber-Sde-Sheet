//Problem Link:- https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
//Time Complexity:- O(N)
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long mx=INT_MIN;
        long long currsum=0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum>mx){
                mx=currsum;
            }
            if(currsum<0){
                currsum=0;
            }
            
        }
        return mx;
        
    }
};
