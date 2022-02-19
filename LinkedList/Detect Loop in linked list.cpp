//Problem Link:- https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1#
//Time Complexity:- O(N)
/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node* fast=head;
        Node* slow=head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};
