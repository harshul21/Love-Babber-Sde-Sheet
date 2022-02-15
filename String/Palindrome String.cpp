//Problem Link:- https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#
//Time Complexity:- O(N)
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int l=0;
	    int r=S.length()-1;
	    while(l<=r){
	        if(S[l]!=S[r]){
	            return 0;
	        }
	        l++;
	        r--;
	    }
	    return 1;
	}

};
