//Problem Link:- https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
//Time Complexity:- O(N+M)
class Solution
{
    public:
    Node* reverse(Node* &head){
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
    struct Node* addTwoLists(struct Node* head1, struct Node* head2)
    {
        Node* first=reverse(head1);
        Node* second=reverse(head2);
        Node* res=NULL;
        Node* temp;
        int sum=0;
        int carry=0;
        Node* curr=NULL;
        while(first!=NULL or second!=NULL){
            sum=carry+(first?first->data:0)+(second?second->data:0);
            carry=(sum>=10?1:0);
            sum=sum%10;
            temp=new Node(sum);
            if(res==NULL){
                res=temp;
            }
            else{
                curr->next=temp;
            }
            curr=temp;
            if(first){
                first=first->next;
            }
            if(second){
                second=second->next;
            }
        }
        if(carry>0){
            temp=new Node(carry);
            curr->next=temp;
            curr=temp;
        }
        res=reverse(res);
        return res;
    }
};
