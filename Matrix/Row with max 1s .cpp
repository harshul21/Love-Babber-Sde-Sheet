//Problem Link:-
//Youtube Link:- https://www.youtube.com/watch?v=ZkwtIuJvLvw

//Approach 1:- Naive Approach- to iterate over all the matrix and counting the occurrence of 1's in each row
//Time Complexity:- O(N*M)

//Approach 2:- Better Approach- As the array is sorted so check for the first occurence of the 1 in each row because every element after 1 will be 1
//Time Complexity:- O(N*log(M))
//Solution Approach:- Finding the first occurence of 1 in every row using binary search
class Solution{
public:
    int binary_search(vector<int> arr){
        int left=0;
        int right=arr.size()-1;
        int res=-1;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==1){
                res=mid;
                right=mid-1;
            }
            else if(arr[mid]<1){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return res;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int firstOccurence=INT_MAX;
	    int count=0;
	    int ans=-1;
	    for(auto it:arr){
	        int res=binary_search(it);
	        
	        if(res<firstOccurence and res!=-1){
	            firstOccurence=res;
	            ans=count;
	        }
	        count++;
	    }
	    return ans;
	}

};

//Approach 3:- Optimal Approach - Traversing the matrix in the reverse order like first tarversing thr col and then row
//Time Complexity:- O(n+m)
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int row=arr.size();
	    int col=arr[0].size();
	    for(int i=0;i<col;i++){
	        for(int j=0;j<row;j++){
	            if(arr[j][i]==1){
	                return j;
	            }
	        }
	    }
	    return -1;
	}

};
