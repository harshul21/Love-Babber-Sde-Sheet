//Problem Link:-
//Time Complexity:-

//Recursive
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void dfs(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        dfs(root->left,ans);
        ans.push_back(root->data);
        dfs(root->right,ans);
    }
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        dfs(root,ans);
        return ans;
    }
};

//Iterative 
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        stack<Node*> st;
        Node* curr=root;
        
        while(!st.empty() or curr!=NULL){
            
            if(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            else{
                curr=st.top();
                st.pop();
                ans.push_back(curr->data);
                curr=curr->right;
            }
        }
        return ans;
    }
};
