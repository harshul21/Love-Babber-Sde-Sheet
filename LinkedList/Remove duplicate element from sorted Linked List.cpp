//Problem Link:- https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
//Time Complexity:- O(N)
Node *removeDuplicates(Node *head)
{
    if(head->next==NULL or head==NULL){
        return head;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* todelete=temp->next;
            temp->next=temp->next->next;
            delete todelete;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}
