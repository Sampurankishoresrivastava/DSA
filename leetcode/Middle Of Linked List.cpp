#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int getLength(Node* head){
    int len=0;

    while(head!=NULL){
        len++;
        head=head->next;
    }

    return len;

}
Node *findMiddle(Node *head) {
    // Write your code here
    int cnt=0;
    int len=getLength(head);
    int ans=(len/2);
    Node* temp=head;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }

    return temp;
}
