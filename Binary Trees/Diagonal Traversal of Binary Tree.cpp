//Problem Link:- https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1/
//Time Complexity:- O(N)
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


vector<int> diagonal(Node *root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        while(curr!=NULL){
            ans.push_back(curr->data);
            if(curr->left){
                q.push(curr->left);
            }
            curr=curr->right;
        }
    }
    return ans;
}
