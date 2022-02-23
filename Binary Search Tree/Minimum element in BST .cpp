//Problem Link:- https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1#
//Time Complexity:- O(Height)
int minValue(struct Node *root) {
    // your code here
    if(root==NULL){
        return -1;
    }
    if(root->left==NULL){
        return root->data;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
