//Problem Link:- https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
//Code:-
class Solution
{
	public:
	    void dfs(int idx,string &s,vector<string> &ans){
	        if(idx==s.length()){
	            ans.push_back(s);
	            return;
	        }
	        for(int i=idx;i<s.length();i++){
	            if(i>idx and s[i]==s[i-1]){
	                continue;
	            }
	            swap(s[i],s[idx]);
	            dfs(idx+1,s,ans);
	            swap(s[i],s[idx]);
	        }
	    }
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string> ans;\
		    sort(s.begin(),s.end());
		    dfs(0,s,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
