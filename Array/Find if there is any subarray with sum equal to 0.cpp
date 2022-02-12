//Problem Link:-
//Time Complexity:-O(N)
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.count(sum)){
                return true;
            }
            mp[sum]++;
        }
        return false;
    }
};
