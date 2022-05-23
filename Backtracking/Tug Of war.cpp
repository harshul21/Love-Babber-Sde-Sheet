//Problem Link:- https://www.geeksforgeeks.org/tug-of-war/
//Code:-
#include<iostream>
using namespace std;
void dfs(vetor<int> arr,int vidx,vector<int> set1,vector<int> set2,int soset1,int soset2,string &ans){
	if(vidx==arr.size()){
		int delta=abs(soset2-soset1);
		if(delta<mindiff){
			mindiff=deta;
			ans=set1+" "+set2;
		}
		return;
	}
	if(set1.size()<(arr.size()+1)/2){
		set1.push_back(arr[vidx]);
		dfs(arr,vidx+1,set1,set2,soset1+arr[vidx],soset2,ans);
		set1.pop_back();
	}
	if(set2.size()<(arr.size()+1)/2){
		set2.push_back(arr[vidx]);
		dfs(arr,vidx+1,set1,set2,soset1,soset2+arr[vidx],ans);
		set2.pop_back();
	}
}
int main(){
	vector<int> arr={3,4,32,3,23,2,12,4,3};
	int n=arr.size();
	vector<int> set1;
	vector<int> set2;
	string ans="";
	dfs(arr,0,set1,set2,0,0,ans);
	return ans;
}
