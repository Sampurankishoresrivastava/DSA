class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
         if(root == NULL) return 0; //terminating condition
         else return (max(maxDepth(root->left),maxDepth(root->right))+1);//recursion with counting node in each iteration until leaf node
    }
};
