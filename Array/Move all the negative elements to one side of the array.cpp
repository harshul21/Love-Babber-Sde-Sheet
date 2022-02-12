//Problem Link:- https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
//Time Complexity:- O(N)
#include <bits/stdc++.h>
using namespace std;
void rearrange(vector<int> &nums){
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            if(i!=j){
                swap(nums[i],nums[j]);
            }
            j++;
        }
    }
}
int main() {
	vector<int> nums={ -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	rearrange(nums);
	for(int i=0;i<nums.size();i++){
	    cout<<nums[i]<<" ";
	}
	return 0;
}
