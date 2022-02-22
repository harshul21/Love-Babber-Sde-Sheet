//Problem Link:-https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
//Time Complexity:- O(N)
/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
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
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
        }
        return ans;
    }
};
