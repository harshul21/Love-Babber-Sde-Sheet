//Problem Link:- https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1
//Time Complexity:- O(height of tree)
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(n1> root->data and n2>root->data){
       return LCA(root->right,n1,n2);
   }
   else if(n1<root->data and n2<root->data){
       return LCA(root->left,n1,n2);
   }
   else{
       return root;
   }
}
