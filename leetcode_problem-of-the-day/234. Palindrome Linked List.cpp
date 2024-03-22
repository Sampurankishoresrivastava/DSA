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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }

        int mid=len/2;
        stack<int> st;
        temp=head;
        int a=1;
        while(a<=mid){
            st.push(temp->val);
            temp=temp->next;
            a++;
        }

        if(len%2==1){
            temp = temp->next;
        }

        // if(len%2==0){
            while(temp){
                if(temp->val!=st.top() || st.empty()){
                    return false;
                }
                // else{
                    temp=temp->next;
                    st.pop();
                // }
            }
        // }

        return true;
    }
};
