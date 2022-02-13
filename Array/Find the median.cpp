//Problem Link:- https://practice.geeksforgeeks.org/problems/find-the-median0527/1
//Time complexity:- O(n*log(n))
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n=v.size();
		    if(n%2==1){
		        int mid=n/2;
		        return v[mid];
		    }
		    int curr=n/2;
		    int prev=curr-1;
		    return (v[curr]+v[prev])/2;
		    
		}
};
