//Problem Link:- https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1
//Time Complexity:- O(N)
class Solution {
public:
    bool isPalindrome(int num){
        string str=to_string(num);
        int n=str.length();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	    if(!isPalindrome(a[i])){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};
