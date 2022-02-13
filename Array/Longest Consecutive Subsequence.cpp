//Problem Link:-

//Approach 1
//Time Complexity:- O(n*log(n))
//Naive Approach
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        
        sort(arr,arr+n);
        int ans=0,count=0;
        vector<int> v;
        v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                v.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<v.size();i++){
            
            if(i>0 and v[i]==v[i-1]+1){
                count++;
            }
            else{
                count=1;
            }
            
            ans=max(ans,count);
        }
        return ans;
    }
};

//Approach 2
//Time Complexity:-O(N)
//Optimal Approach
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        unordered_set<int> st;
        int ans=0;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(st.find(arr[i]-1)==st.end()){
                int j=arr[i];
                while(st.find(j)!=st.end()){
                    j++;
                    
                }
                ans=max(ans,j-arr[i]);
            }
        }
        return ans;
        
    }
};
