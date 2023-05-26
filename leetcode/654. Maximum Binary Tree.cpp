/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0){
            return NULL;
        }
        vector<int> :: iterator maxi=max_element(nums.begin(),nums.end());
        TreeNode* root=new TreeNode(*maxi);
        vector<int>lefttree(nums.begin(),maxi);
        vector<int>righttree(++maxi,nums.end());

        root->left=constructMaximumBinaryTree(lefttree);
        root->right=constructMaximumBinaryTree(righttree);

        return root;
    }
};
