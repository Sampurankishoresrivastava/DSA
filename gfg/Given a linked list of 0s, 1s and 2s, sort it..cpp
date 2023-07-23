class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int a=0,b=0,c=0;
        Node *temp=head;
        while(head)
         {
             if(head->data==0)a++;
             else if(head->data==1)b++;
             else c++;
             head=head->next;
         }
         head=temp;
         while(temp){
             temp->data=a-->0?0:b-->0?1:2;
             temp=temp->next;
         }
        return head;
        // Add code here
        
    }
};
