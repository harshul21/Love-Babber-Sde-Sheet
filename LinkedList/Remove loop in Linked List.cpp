//Problem Link:- https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
//Time Complexity:- O(N)
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* fast=head;
        Node* slow=head;
        int flag=0;
        while(fast->next!=NULL and fast->next->next!=NULL){
            
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return;
        }
        fast=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        while(slow->next!=fast){
            slow=slow->next;
        }
        slow->next=NULL;
    }
};
