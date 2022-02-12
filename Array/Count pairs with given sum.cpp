//Problem Link:- https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
Time Complexity:-O(N)
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            if(mp[k-arr[i]]){
                count+=mp[k-arr[i]];
            }
            mp[arr[i]]++;
        }
        return count;
    }
};
