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
    void a(TreeNode* p, vector<string> &v, string str ){
       
        if(p==NULL){
            return;
        }
        if(p->left==NULL and p->right==NULL){
            str+=to_string(p->val);
            v.push_back(str);
            return;
        }
        str+=(to_string(p->val)+"->");
        a(p->left,v,str);
        a(p->right,v,str);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        a(root,v,"");
        return v;
    }
};