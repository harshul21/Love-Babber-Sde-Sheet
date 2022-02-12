//Problem Link:- https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#
//Time Complexity:- O(N)
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int arr[100001];
        memset(arr,-1,sizeof(arr));
        int count=0;
        int i=0;
        int j=0;
        while(i<n and j<m){
            if(arr[a[i]]==-1){
                arr[a[i]]=1;
                count++;
            }
            if(arr[b[j]]==-1){
                arr[b[j]]=1;
                count++;
            }
            i++;
            j++;
        }
        while(i<n){
            if(arr[a[i]]==-1){
                arr[a[i]]=1;
                count++;
            }
            i++;
        }
        while(j<m){
            if(arr[b[j]]==-1){
                arr[b[j]]=1;
                count++;
            }
            j++;
        }
        return count;
    }
};
