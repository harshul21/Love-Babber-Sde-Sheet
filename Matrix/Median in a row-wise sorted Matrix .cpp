//Problem Link:-

//Approach 1:-Naive Approach
//Time Complexity:- O(N*M)
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        code here  
        priority_queue<int> pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                pq.push(matrix[i][j]);
            }
        }
        
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        int n=ans.size();
        return ans[n/2];
    }
};

//Approach 2:- Optimised Approach
//Time Complexity:- O(32*N*log2(M))
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int startVal=0;
        int endVal=2000;
        int midVal;
        int n=r*c;
        while(startVal<=endVal){
            midVal=(endVal+startVal)/2;
            int ans=0;
            for(int i=0;i<r;i++){
                int l=0,h=c-1;
                while(l<=h){
                    int m=l+(h-l)/2;
                    if(matrix[i][m]<=midVal){
                        l=m+1;
                    }
                    else{
                        h=m-1;
                    }
                }
                ans+=l;
            }
            if(ans<=n/2){
                startVal=midVal+1;
            }
            else{
                endVal=midVal-1;
            }
        }
        return startVal;
    }
};
