//Solving on GFG
//Problem Link:- https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#
//Time Complexity:- O(height of tree)
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* root){
        if(root==NULL){
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        
        return 1+max(l,r);
    }
    int diameter(Node* root) {
        if(root==NULL){
            return 0;
        }
        
        int lheight=height(root->left);
        int rheight=height(root->right);
        
        int ldiameter=diameter(root->left);
        int rdiameter=diameter(root->right);
        
        return max(lheight+rheight+1,max(ldiameter,rdiameter));
    }
};


//Solving problem on leetcode the below solution is more optimal i don't why it is not accepting at GFG
//Problem Link:- https://leetcode.com/problems/diameter-of-binary-tree/
//Time Complexity:- O(height of tree)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode*root,int& mx)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh=dfs(root->left,mx);
        int rh=dfs(root->right,mx);
        
        mx=max(mx,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int mx=INT_MIN;
        dfs(root,mx);
        return mx; 
    }
};
