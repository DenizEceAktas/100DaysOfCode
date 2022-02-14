//leetcode 104

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maximum;
        if(root == NULL){
            return 0;
        }    
        int left= maxDepth(root->left);
        int right= maxDepth(root->right);
        maximum=max(left,right);
        
        return 1 + maximum;
    }
};