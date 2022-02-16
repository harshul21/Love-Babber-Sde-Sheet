//Problem Link:- https://www.geeksforgeeks.org/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/
//Time Complexity:- O(N)

#include<bits/stdc++.h>
using namespace std;
int maxSubstr(string str,int n){

	int count0=0,count1=0;

	int cnt=0;
	for(int i=0;i<n;i++){
		if(str[i]=='0'){
			count0++;
		}
		else{
			count1++;
		}
		if(count1==count0){
			cnt++;
		}
	}

	if(count1!=count0){
		return -1;
	}
	return cnt;
}
int main(){
	string str="01001110101";
	int n=str.length();
	cout<<maxSubstr(str,n);
	return 0;
}
