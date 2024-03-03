/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int length=0;
        ListNode* temp=head;

        while(temp){
            length++;
            temp=temp->next;
        }

        int delnode= length-n-1;
        int lastnoded=delnode;

        ListNode* p=head;

        while(delnode && p){
            p=p->next;
            delnode--;
        }

        if(length==1){
            delete head;
            return NULL;
        }

        if(lastnoded==-1){
            ListNode* a = head;
            head = head->next;
            delete a;
            return head;
        }
        
        ListNode* b = p->next;
        p->next = b->next;
        delete b;

        return head;
    }
};
