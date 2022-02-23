//Problem Link:- https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1/#
//Time Complexity:- O(height of tree)
// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
    if(root==NULL){
        return false;
    }
    else if(root->data==x){
        return true;
    }
    else if(root->data<x){
        search(root->right,x);
    }
    else{
        search(root->left,x);
    }
}
