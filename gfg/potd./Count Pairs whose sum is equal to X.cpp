/*
Structure of the node of the linked list is as
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
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int,int> mp;
        while(head1!=NULL) 
        {
            mp[head1->data]++;
            head1=head1->next;
        }
        int cnt=0;
        while(head2!=NULL)
        {
            if(mp.find(x-head2->data)!=mp.end())  cnt++;
            head2=head2->next;
        }
        return cnt;
    }
};
