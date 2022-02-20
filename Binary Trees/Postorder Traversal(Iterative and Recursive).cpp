//Problem Link:- https://practice.geeksforgeeks.org/problems/postorder-traversal/1#
//Time Complexity:- O(N)

//Recursive
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
void dfs(Node* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    
    dfs(root->left,ans);
    dfs(root->right,ans);
    ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
    vector<int> ans;
    dfs(root,ans);
    return ans;
}

//Iterative
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    stack<Node*> st;
    st.push(root);
    stack<int> out;
    
    while(!st.empty()){
        Node* curr=st.top();
        st.pop();
        
        out.push(curr->data);
        
        if(curr->left){
            st.push(curr->left);
        }
        
        if(curr->right){
            st.push(curr->right);
        }
    }
    
    while(!out.empty()){
        ans.push_back(out.top());
        out.pop();
    }
    
    return ans;
}
