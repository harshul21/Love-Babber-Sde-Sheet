//Problem Link:- https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#
//Time Complexity:- O(N*N)
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        for(int i=0;i<n-2;i++){
            unordered_set<int> st;
            int curr=X-A[i];
            for(int j=i+1;j<n;j++){
                if(st.find(curr-A[j])!=st.end()){
                    return true;
                }
                st.insert(A[j]);
            }
        }
        return false;
    }

};
