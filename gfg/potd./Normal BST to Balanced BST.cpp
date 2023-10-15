/*Structure of the Node of the BST is as
struct Node
{
	int data;
	Node* left, *right;
};
*/

class Solution{
    
    public:
    
    // To store the nodes of BST in to vector 
    // Note that array would be sorted as inorder traversal of BST always produces sorted sequence.
    
    void storesnode(vector<Node*> &temp, Node* root){
        
        if(root==NULL){
            return;
        }
        
        storesnode(temp,root->left);
        temp.push_back(root);
        storesnode(temp,root->right);
    }
    
    Node* balacedBST(vector<Node*> &temp, int start, int end){
        
        if(start> end){
            return NULL;
        }
        
        int mid=(start+end)/2;
        
        Node* newroot= temp[mid];
        
        newroot->left = balacedBST(temp, start, mid-1);
        newroot->right = balacedBST(temp, mid+1, end);
        
        return newroot;
    }
    
    // Your are required to complete this function
    // function should return root of the modified BST
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<Node*> temp;
    	
    	storesnode(temp,root);
    	
    	int n=temp.size();
    	
    	return balacedBST(temp,0,n-1);
    }
};
