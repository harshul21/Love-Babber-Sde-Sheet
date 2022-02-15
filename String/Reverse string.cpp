//Problem Link:- https://leetcode.com/problems/reverse-string/
//Time Complexity:- O(N)
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0;
        int h=s.size()-1;
        while(l<=h)
        {
            swap(s[l],s[h]);
            l++;
            h--;
        }   
    }
};
