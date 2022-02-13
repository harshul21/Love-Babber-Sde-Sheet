//Problem Link:-

//Approach 1:- naive approach just sort the array
//Time Complexity:- O(n*log(n))

//Approach 2:-
//Time Complexity:- O(N)
class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& nums,int a, int b)
    {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]<a){
                swap(nums[low++],nums[mid++]);
            }
            else if(nums[mid]>=a and nums[mid]<=b){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
