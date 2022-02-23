//Problem Link:- https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1#
//Time COmplexity:- O(N)
/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    void dfs(Node* root,int l,set<int> &st){
        if(root==NULL){
            return;
        }
        l++;
        if(root->left==NULL and root->right==NULL){
            st.insert(l);
        }
        dfs(root->left,l,st);
        dfs(root->right,l,st);
    }
    bool check(Node *root)
    {
        //Your code here
        int l=0;
        set<int> st;
        dfs(root,l,st);
        return st.size()==1;
    }
};
