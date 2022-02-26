//Problem Link:- https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
//Time Complexity:- O(logn)
int fo(int arr[],int n,int x)
{
    int res=-1;
    int high=n-1;
    int low=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            res=mid;
            high=mid-1;
        }
    }
    return res;
}
int lo(int arr[],int n,int x)
{
    int res=-1;
    int high=n-1;
    int low=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            res=mid;
            low=mid+1;
        }
    }
    return res;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int f=fo(arr,n,x);
    int l=lo(arr,n,x);
    
    v.push_back(f);
    v.push_back(l);
    return v;
}
