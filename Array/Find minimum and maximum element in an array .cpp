//Problem Link:- https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/#
//Time Complexity - O(N)
pair<long long, long long> getMinMax(long long a[], int n) {
    long long mx=a[0];
    long long mn=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
        if(a[i]<mn){
            mn=a[i];
        }
    }
    return make_pair(mn,mx);
}
