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
void swap(TreeNode* res){
        if(!res){
            return;
        }
    swap(res->left);
    swap(res->right);
    
    TreeNode * t=res->left;
    res->left=res->right;
    res->right=t;
}
    public:
    TreeNode* invertTree(TreeNode* root) {
     swap(root);
        return root;
    }
};