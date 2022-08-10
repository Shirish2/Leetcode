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
    bool s(TreeNode* p, TreeNode* q){
        if(!p and !q){
            return true;
        }
        if(!p){
            return false;
        }
        if(!q){
            return false;
        }
        if(p->val==q->val){
            return (s(p->left,q->left) and s(p->right,q->right));
        }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root){
            return false;
        }
        if(s(root,subRoot)){
            return true;
        }
        return (isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot));
        
    }
};