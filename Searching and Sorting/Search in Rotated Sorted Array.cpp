//Problem Link:- https://leetcode.com/problems/search-in-rotated-sorted-array/
//Time Complexity:- O(logn)
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[low]<=arr[mid]){
                if(arr[low]<=target and arr[mid]>=target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(arr[mid]<=target and arr[high]>=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            
        }
        return -1;
    }
};
