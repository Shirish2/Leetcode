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
    vector<int> v;
    void a(TreeNode* t){
        if(t==NULL) return ;
        if(t!=NULL) v.push_back(t->val);
        if(t->left) a(t->left);
        if(t->right) a(t->right);
        return;
    }
    int getMinimumDifference(TreeNode* root) {
        //vector<int> v;
        a(root);
        int mini=INT_MAX;
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++){
            int m=v[i]-v[i-1];
            mini=min(mini,m);
        }
        return mini;
    }
};