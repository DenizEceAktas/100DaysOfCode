class Solution {
public:
    bool check(TreeNode* leftNode, TreeNode* rightNode){
        if(!leftNode && !rightNode)
        {
            return true;
        }
        else if(!leftNode || !rightNode)
        {
            return false;
        }
        
        if(leftNode->val != rightNode->val)
        {
            return false;
        }
        
        return check(leftNode->left,rightNode->right)&&check(leftNode->right,rightNode->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        else
        {
            return check(root->left,root->right);
        }
    }
};