/*You are given two binary trees root1 and root2.

Imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not. You need to merge the two trees into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of the new tree.

Return the merged tree.

Note: The merging process must start from the root nodes of both trees.
*/
//leetcode 617
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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* newTree=new TreeNode();
        
        if((root1==NULL && root2==NULL)){
            
            return NULL;
        }
        
        else if(root1==NULL && root2 != NULL){
            newTree->val=root2->val;
            newTree->left=mergeTrees(root1,root2->left);
            newTree->right=mergeTrees(root1,root2->right);
        }
        else if(root2==NULL && root1 != NULL){
            newTree->val=root1->val;
            newTree->left=mergeTrees(root1->left,root2);
            newTree->right=mergeTrees(root1->right,root2);
        }
        else{
            newTree->val=root1->val+root2->val;
            newTree->left=mergeTrees(root1->left,root2->left);
            newTree->right=mergeTrees(root1->right,root2->right);
        }
        
        
        
        return newTree;
    }
};