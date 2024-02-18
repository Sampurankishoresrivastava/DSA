/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */


class Solution
{
    public:
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *root ){
             /*Your code here */
             int sl,sr;
             if(root==NULL){
                 return 0;
             }
             
             if(root-> left==NULL && root->right==NULL){
                 return root->data;
             }
             
             sl=sumOfLeafNodes(root->left);
             sr=sumOfLeafNodes(root->right);
             
             return sl+sr;
        }
};
