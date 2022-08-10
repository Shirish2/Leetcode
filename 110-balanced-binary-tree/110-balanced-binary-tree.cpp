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
    int a(TreeNode* root){
         if(root==NULL){
            return 0;
        }
        int h1=a(root->left);
        if(h1==-1){
            return -1;
        }
        int h2=a(root->right);
        if(h2==-1){
            return -1;
        }
        if(abs(h1-h2)>1){
            return -1;
        }
        return 1+max(h1,h2);
        
    }
    bool isBalanced(TreeNode* root) {
       return !(a(root)==-1);
    }
};