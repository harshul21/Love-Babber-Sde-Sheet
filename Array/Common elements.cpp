//Problem Link:-https://practice.geeksforgeeks.org/problems/common-elements1132/1#
//Time Complexity:- O(n1+n2+n3)
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector<int> ans;
            int zero_index_flag=0;
            while((i<n1) and (j<n2) and (k<n3)){
                int a=A[i];
                int b=B[j];
                int c=C[k];
                if(a==b and a==c){
                    if(zero_index_flag==0){
                        ans.push_back(c);
                        zero_index_flag=1;
                    }
                    else{
                        if(ans.back()!=c){
                            ans.push_back(c);
                        }
                    }
                }
                if(a<=b and a<=c){
                    i++;
                }
                if(b<=a and b<=c){
                    j++;
                }
                if(c<=a and c<=b){
                    k++;
                }
            }
            return ans;
        }

};
