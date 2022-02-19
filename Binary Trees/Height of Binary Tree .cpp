//Problem Link:- https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
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
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int l=height(node->left);
        int r=height(node->right);
        return max(l,r)+1;
    }
};
