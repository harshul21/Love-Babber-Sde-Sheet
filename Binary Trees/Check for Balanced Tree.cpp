//Problem Link:- https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1#
//Time Complexity:- O(N)
/*
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

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        
        return max(left,right)+1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL or (root->left==NULL and root->right==NULL)){
            return true;
        }
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)<=1) and isBalanced(root->left) and isBalanced(root->right)){
            return true;
        }
        return false;
    }
};
