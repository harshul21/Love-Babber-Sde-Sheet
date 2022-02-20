//Problem Link:- https://practice.geeksforgeeks.org/problems/preorder-traversal/1#
//Time Complexity:- O(N)

//Recursive
/* A binary tree node has data, pointer to left child
   and a pointer to right child  

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

//Function to return a list containing the preorder traversal of the tree.
void dfs(Node* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    dfs(root->left,ans);
    dfs(root->right,ans);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  dfs(root,ans);
  return ans;
}

//Iterative
/* A binary tree node has data, pointer to left child
   and a pointer to right child  

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

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    stack<Node*> st;
    st.push(root);
    
    while(!st.empty()){
        Node* curr=st.top();
        st.pop();
        
        ans.push_back(curr->data);
        if(curr->right){
            st.push(curr->right);
        }
        if(curr->left){
            st.push(curr->left);
        }
    }
    return ans;
}
