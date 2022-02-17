//Problem Link:- https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#
//Time Complexity:- O(N)
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0;i<x.length();i++){
            char ch=x[i];
            if(ch=='{' or ch=='[' or ch=='('){
                st.push(ch);
            }
            else{
                if(st.empty()==true){
                    return false;
                }
                if((st.top()=='{' and ch=='}') or (st.top()=='[' and ch==']') or (st.top()=='(' and ch==')')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }

};
