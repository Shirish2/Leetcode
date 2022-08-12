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
    int a=0,b=0;
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        if(a>preorder.size()) return nullptr;
        TreeNode * t= new TreeNode(preorder[a]);
        a++;
        if(t->val!=postorder[b]){
            t->left=constructFromPrePost(preorder,postorder);
            b++;
        }
        if(t->val!=postorder[b]){
            t->right=constructFromPrePost(preorder,postorder);
            b++;
        }
        return t;
    }
};