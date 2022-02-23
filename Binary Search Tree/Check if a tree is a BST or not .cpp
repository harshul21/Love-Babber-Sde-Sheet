//Problem Link:- https://practice.geeksforgeeks.org/problems/check-for-bst/1
//Time Complexity:- O(N)
class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    void dfs(Node* root,vector<int> &v)
    {
        if(root==NULL)
        {
            return;
        }
        dfs(root->left,v);
        v.push_back(root->data);
        dfs(root->right,v);
    }
    bool isBST(Node* root) 
    {
        if(root==NULL)
        {
            return true;
        }
        vector<int> v;
        dfs(root,v);
        for(int i=1;i<v.size();i++)
        {
            if(v[i-1]>=v[i])
            {
                return false;
            }
        }
        return true;
    }
};
