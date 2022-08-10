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
    
    int height(TreeNode* v){
        if(v==nullptr) return 0;
        
        int h1=height(v->left);
        int h2=height(v->right);
        return 1+max(h1,h2);
    }
    int maxDepth(TreeNode* root) {
        return height(root);
        
    }
};