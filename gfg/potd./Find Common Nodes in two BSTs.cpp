class Solution
{
    public:
    
    void inorder(Node* root, map<int,int> &mp){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,mp);
        mp[root->data]++;
        inorder(root->right,mp);
        
    }
    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     map<int,int>mp;
     vector<int> ans;
     
     inorder(root1,mp);
     inorder(root2,mp);
     
     
     for(auto it: mp){
        if(it.second==2){
            ans.push_back(it.first);
        }
     }
     
     return ans;
    }
};
