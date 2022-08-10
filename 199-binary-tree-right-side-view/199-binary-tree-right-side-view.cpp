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
    void a(TreeNode* root,vector<int> &v,int lev){
        if(root==NULL){
            return;
        }
        if(lev==v.size()){
            v.push_back(root->val);
        }
        a(root->right,v,lev+1);
        a(root->left,v,lev+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector <int> v;
        a(root,v,0);
        return v;
    }
};