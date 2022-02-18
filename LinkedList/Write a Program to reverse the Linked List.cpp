//Problem Link:- https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/#
//Time Complexity:- O(N)

//Iterative way
// struct Node
// {
//     int data;
//     struct Node *next;
// }


class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        //Iterative
        Node* prev=NULL;
        Node* curr=head;
        Node* nxt;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    
};


