//Problem Link:-

//Approach 1:-
//Time Complexity:- O(N*N)
//Method(Not Implementing the code)- use to for loops

//Approach 2:-
//Time Complexity:- O(N) Sliding Window technique
int func(vector<int> arr,int k){
    int i=0,j=0;
    int n=arr.size();
    int sum=0;
    int mn=INT_MAX;
    while(j<n){
        while(sum<=k and j<n){
            sum+=arr[j];
            j++;
        }
        while(sum>k and i<j){
            mn=min(mn,j-i+1);
            sum-=arr[i];
            i++;
        }
    }
    return mn;
}
