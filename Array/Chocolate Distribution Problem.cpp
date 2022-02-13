//Problem Link:- https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#
//Time Complexity:- O(N)
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long i=0,j=m-1;
        long long mn=INT_MAX;
        sort(a.begin(),a.begin()+n);
        long long ans=INT_MAX;
        while(j<n){
            ans=min(ans,a[j]-a[i]);
            i++;j++;
        }
        return ans;
    }   
};
