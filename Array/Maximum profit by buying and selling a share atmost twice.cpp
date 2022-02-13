//Problem Link:-

//Approach 1:-
//Time complexity:-O(N)
//Two passes required
int maxProfit(vector<int> price,int n){
    int profit[n];
    for(int i=0;i<n;i++){
        profit[i]=0;
    }

    int max_profit=price[n-1];
    for(int i=n-2;i>=0;i--){
        if(prices[i]>max_price){
            max_price=price[i];
        }

        profit[i]=max(profit[i+1],max_price-price[i]);
    }

    int min_price=price[0];
    for(int i=1;i<n;i++){

        if(price[i]<min_price){
            min_price=price[i];
        }

        profit[i]=max(profit[i-1], profit[i]+(price[i]-min_price));
    }

    return profit[n-1];
}

//Approach 2:-
//Time Complexity:- O(N)
//One pass required
#include<iostream>
using namespace std;
int main(){
    int price[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n = 7;

    int profit=0;

    for(int i=1;i<n;i++){
        int sub=price[i]-price[i-1];
        if(sub>0){
            profit+=sub;
        }
    }
    return profit;
}

