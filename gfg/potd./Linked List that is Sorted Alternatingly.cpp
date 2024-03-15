
/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
         Node *ptr=*head;
        int count=0;
         
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
         
        vector<int> temp(count);
         
        Node *p=*head;
        int i=0;
        while(p!=NULL){
            temp[i]=p->data;
            p=p->next;
            i++;
        }
        
        std::sort(temp.begin(), temp.end());

        Node *sol = *head;
        for (int j=0;j<count;j++){
            sol->data=temp[j];
            sol=sol->next;
        }
         
    }
};
