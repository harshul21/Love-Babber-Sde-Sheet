//Problem Link:- https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#
//Time Complexity:- O(N)
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long ans=0;
        long long leftmax=0;
        long long rightmax=0;
        int left=0;
        int right=n-1;
        while(left<=right){
            if(arr[left]<=arr[right]){
                if(arr[left]>=leftmax){
                    leftmax=arr[left];
                }
                else{
                    ans+=(leftmax-arr[left]);
                }
                left++;
            }
            else{
                if(arr[right]>=rightmax){
                    rightmax=arr[right];
                }
                else{
                    ans+=(rightmax-arr[right]);
                }
                right--;
            }
        }
        return ans;
    }
};
