//Problem Link:- https://practice.geeksforgeeks.org/problems/reverse-a-string/1#
//Iterative Way
//Time Complexity-O(N)
string reverseWord(string str){
    int l=0;
    int r=str.length()-1;
    while(l<r){
        swap(str[l],str[r]);
        l++;
        r--;
    }
    return str;
}
//Recursive Way
//Time Complexity-O(N)
void dfs(string &str,int start,int end){
    if(start>end){
        return;
    }
    swap(str[start],str[end]);
    dfs(str,start+1,end-1);
}
string reverseWord(string str){
    //Recursive Way
    dfs(str,0,str.length()-1);
    return str;
}
