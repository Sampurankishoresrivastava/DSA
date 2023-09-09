/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
     int ans=0;
    
    void inorder(Node *root,int &k){
        if(!root)return;
        inorder(root->right,k);
        k--;
        if(k==0)ans=root->data;
        inorder(root->left,k);
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        inorder(root,K);
        return ans;
    }
};
