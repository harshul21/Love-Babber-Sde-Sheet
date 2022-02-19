//Problem Link:-
//Time Complexity:- O(N)
/* A binary tree Node

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


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
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
                ans.push_back(curr->data);
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
