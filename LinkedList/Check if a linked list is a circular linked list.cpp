//Problem Link:- https://practice.geeksforgeeks.org/problems/circular-linked-list/1
//Time Complexity:- O(N)
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   Node* fast=head;
   Node* slow=head;
   while(fast!=NULL and fast->next!=NULL)
   {
       fast=fast->next->next;
       slow=slow->next;
       if(fast==slow)
       {
           return true;
       }
   }
   return false;
}
