//Problem Link:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Time Complexity:- O(N)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int mx=0;
        for(int i=0;i<prices.size();i++){
            if(mn>prices[i]){
                mn=prices[i];
            }
            else if(prices[i]-mn>mx){
                mx=prices[i]-mn;
            }
        }
        return mx;
    }
};
