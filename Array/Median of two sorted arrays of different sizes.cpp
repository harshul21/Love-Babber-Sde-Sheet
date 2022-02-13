//Problem Link:- https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/
//Time Complexity:- O(n+m)
int getMedian(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    int count;
    int m1=-1,m2=-1;
    for(count=0;count<=(m+n)/2;count++){
        m2=m1;
        if(i!=n and j!=m){
            m1=(arr1[i]>arr2[j])?arr2[j++]:arr1[i++];
        }
        else if(i<n){
            m1=arr1[i++];
        }
        else{
            m1=arr2[j++];
        }
    }

    if((m+n)%2==1){
        return m1;
    }
    else{
        return (m1+m2)/2;
    }
}
