//Problem Link:- https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
//Time Complexiy:- O(N)
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(root==NULL){
           return root;
       }
       
       if(root->data==n1 or root->data==n2){
           return root;
       }
       
       Node* l=lca(root->left,n1,n2);
       Node* r=lca(root->right,n1,n2);
       
       if(l and r){
           return root;
       }
       
       if(l){
           return l;
       }
       
       return r;
       
    }
};
