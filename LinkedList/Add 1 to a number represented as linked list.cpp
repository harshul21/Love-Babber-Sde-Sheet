//Problem link:- https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1#
//Time Complexity:- O(N)
/* 

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

class Solution
{
    public:
    Node* reverse(Node* &head)
    {
        Node* prev=NULL;
        Node* curr=head;
        Node* nextptr;
        while(curr!=NULL)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        
        return prev;
        
    }
    Node* addOne(Node *head) 
    {
        if(head->next==NULL)
        {
            head->data+=1;
            return head;
        }
        Node* temp=reverse(head);
        Node* temp1=temp;
        int carry=0;
        temp1->data+=1;
        if(temp1->data>9)
        {
            carry=1;
            temp1->data=0;
        }
        temp1=temp1->next;
        while(carry!=0 and temp1->next!=NULL)
        {
            temp1->data+=carry;
            //cout<<temp1->data<<endl;
            if(temp1->data>9)
            {
                carry=1;
                temp1->data=0;
            }
            else
            {
                carry=0;
            }
            temp1=temp1->next;
        }
        if(carry==1)
        {
            temp1->data+=carry;
        }
        Node* head1=reverse(temp);
        return head1;
        
    }
};
