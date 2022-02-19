//Problem Link:- https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
//Time Complexity:- O(N)

/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    stack<int> st;
    while(!q.empty()){
        int s=q.size();
        for(int i=1;i<=s;i++){
            Node* curr=q.front();
            q.pop();
            st.push(curr->data);
            if(curr->right){
                q.push(curr->right);
            }
            if(curr->left){
                q.push(curr->left);
            }
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
    
}
