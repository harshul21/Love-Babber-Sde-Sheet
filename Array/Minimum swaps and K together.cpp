//Problem Link:- https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#
//Time Complexity:- O(N)
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                cnt++;
            }
        }
        int bad=0;
        for(int i=0;i<cnt;i++){
            if(arr[i]>k){
                bad++;
            }
        }
        
        int i=0,j=cnt,ans=bad;
        while(j<n){
            if(arr[i]>k){
                bad--;
            }
            if(arr[j]>k){
                bad++;
            }
            ans=min(ans,bad);
            i++,j++;
        }
        return ans;
    }
};

