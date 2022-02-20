//Problem Link:- https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
//Time Complexity:- O(N)
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

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int s=q.size();
        for(int i=1;i<=s;i++){
            Node* curr=q.front();
            q.pop();
            if(i==s){
                ans.push_back(curr->data);
            }
            if(curr->right){
                q.push(curr->right);
            }
            
            if(curr->left){
                q.push(curr->left);
            }
        }
    }
    return ans;
}
