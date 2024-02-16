//User function Template for C++

/* Node of the binary search tree 
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:
    void inorder(Node *root,vector<int>&v)
{
    if(root==NULL)
    return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    
}
    Node *flattenBST(Node *root)
    {
        // code here
        vector<int>v;
        inorder(root,v);
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        return NULL;
    }
};
