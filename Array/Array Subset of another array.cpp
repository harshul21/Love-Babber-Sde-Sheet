//Problem Link:- https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1#
//Time Complexity:- O(n+m)
string isSubset(int a1[], int a2[], int n, int m) {
    int arr[100002];
    memset(arr,-1,sizeof(arr));
    
    for(int i=0;i<n;i++){
        arr[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(arr[a2[i]]==-1){
            return "No";
        }
    }
    return "Yes";
}
