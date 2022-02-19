//Problem Link:- https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
//Time Complexity:- O(N)
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* prev=NULL;
        node* curr=head;
        node* nxt;
        int c=0;
        while(curr!=NULL and c<k){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            c++;
        }
        if(nxt!=NULL){
            head->next=reverse(nxt,k);
        }
        return prev;
    }
};
