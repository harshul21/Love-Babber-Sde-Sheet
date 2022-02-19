//Problem Link:- https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
//Time Complexity:- O(N+M)
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp1=head1;
    Node* temp2=head2;
    
    while(temp1!=temp2){
        if(temp1==NULL){
            temp1=head2;
        }
        else if(temp1){
            temp1=temp1->next;
        }
        if(temp2==NULL){
            temp2=head1;
        }
        else if(temp2){
            temp2=temp2->next;
        }
    }
    return temp1->data;
}
