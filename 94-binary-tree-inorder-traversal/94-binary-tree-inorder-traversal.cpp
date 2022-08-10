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
     void an(TreeNode* a, vector<int> &v){
        if(a){
            an(a->left,v);
            v.push_back(a->val);
            an(a->right,v);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> v;
         an(root,v);
        return v;
    }
};