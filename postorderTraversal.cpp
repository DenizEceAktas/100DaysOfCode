//postorder Traversal in a binary tree

//leetcode 145

class Solution {
public:
    vector<int> order;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL){
            return order;
        }
        
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        
        order.push_back(root->val);
        
        
        
        return order;
    }
};