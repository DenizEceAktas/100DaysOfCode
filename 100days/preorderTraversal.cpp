//preorder traversal in bianry tree
//leetcode 144

class Solution {
public:
    vector<int> order;
    vector<int> preorderTraversal(TreeNode* root) {
       
        if(root == NULL){
            return order;
        }
        order.push_back(root->val);
        if(root->left!=NULL){
            preorderTraversal(root->left);
        }
        
        if(root->right!=NULL){
            preorderTraversal(root->right);
        }

        return order;
    }
};