class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    void temp(Node *root, vector<Node*> &ans){
        if(root==NULL){
            return;
        }
         temp(root->left,ans);
         ans.push_back(root);
         temp(root->right,ans);
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        // if(root==NULL){
        //     return NULL;
        // }
        vector<Node*> ans;
        temp(root,ans);
        // ans.push_back(root);
        // inOrderSuccessor(root->left);
        // ans.push_back(root);
        // inOrderSuccessor(root->right);
        
        for(int i=0;i<ans.size();i++){
            if(ans[i]==x && i+1<ans.size()){
                return ans[i+1];
            }
        }
        return NULL;
    }
};
