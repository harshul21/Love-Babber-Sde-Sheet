//Problem Link:- https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/
//Time Complexity:- O(N)
vector<int> morethanNbyK(int arr[],int n,int k){
    int x=n/k;
    vector<int> ans;
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:freq){
        if(it.second>x){
            ans.push_back(it.first);
        }
    }
    return ans;

}
