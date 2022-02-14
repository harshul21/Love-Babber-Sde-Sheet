//Problem Link:-
//Time Complexity:- O(n*m)
//Youtube Link:- https://www.youtube.com/watch?v=oaN9ibZKMpA
//Prequiste:- Largest Area of rectangle in a histogram
class Solution{
  public:
    //Code for largest area in a histogram
    int largestRectangle(int heights[],int n){
        stack<int> st;
        int leftSmall[n], rightSmall[n];
        for(int i=0;i<n;i++){
            while(!st.empty() and heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                leftSmall[i]=st.top()+1;
            }
            else{
                leftSmall[i]=0;
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and heights[st.top()]>=heights[0]){
                st.pop();
            }
            if(!st.empty()){
                rightSmall[i]=st.top()-1;
            }
            else{
                rightSmall[i]=n-1;
            }
            st.push(i);
        }
        int maxA=0;
        for(int i=0;i<n;i++){
            maxA=max(maxA,heights[i]*(rightSmall[i]-leftSmall[i]+1));
        }
        return maxA;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        int area = largestRectangle(M[0],m);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==1){
                    M[i][j]=M[i][j]+M[i-1][j];
                }
                else{
                    M[i][j]=0;
                }
            }
            int newarea=largestRectangle(M[i],m);
            area=max(area,newarea);
        }
        return area;
    }
};
