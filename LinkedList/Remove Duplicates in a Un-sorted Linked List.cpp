//Problem Link:- https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
//TIme Complexity:- O(N)
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        map<int,int> mp;
        mp[head->data]=1;
        Node* prev=head;
        Node* curr=prev->next;
        while(curr!=NULL){
            if(mp[curr->data]){
                prev->next=curr->next;
                free(curr);
            }
            else{
                mp[curr->data]=1;
                prev=curr;
            }
            curr=prev->next;
        }
        return head;
    }
};
