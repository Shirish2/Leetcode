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
    int count=0;
    void a(TreeNode* root,int targetSum,long long sum){
        if(root==NULL) return;
        if(targetSum==sum) count++;
        if(root->left != NULL) a(root->left,targetSum,sum+root->left->val);
        if(root->right != NULL) a(root->right,targetSum,sum+root->right->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        
        a(root,targetSum,root->val);
        
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return count;
    }
};