//Problem Link:- https://www.codingninjas.com/codestudio/problems/count-inversions_615?topList=striver-sde-sheet-problems&leftPanelTab=0
//Time Complexity:- O(n*log(n))
long long merge(long long *arr,long long *temp,int left,int mid,int right)
{
    int i,j,k;
    i=left;
    j=mid;
    k=left;
    int inv_count=0;
    while(i<=mid-1 and j<=right)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
            inv_count=inv_count+(mid-i);
        }
    }
    while(i<=mid-1)
    {
        temp[k++]=arr[i++];
    }
    while(j<=right)
    {
        temp[k++]=arr[j++];
    }
    for(int i=left;i<=right;i++)
    {
        arr[i]=temp[i];
    }
    return inv_count;
}
long long mergesort(long long *arr,long long *temp,int left,int right)
{
    long long inv_count=0;
    if(right>left)
    {
        int mid=left+(right-left)/2;
        inv_count+=mergesort(arr,temp,left,mid);
        inv_count+=mergesort(arr,temp,mid+1,right);
        inv_count+=merge(arr,temp,left,mid+1,right);
    }
    
    return inv_count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    if(n==0)
    {
        return 0;
    }
    long long temp[n];
    long long ans=mergesort(arr,temp,0,n-1);
    return ans;
}
