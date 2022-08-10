/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* t=root;
        int a=p->val;
        int b=q->val;
        if(a>b){
            swap(a,b);
        }
        
        while(true){
            if(a==t->val or b==t->val) {
                break;
            }
            if(a<t->val and b<t->val){
                t=t->left;
            }
            else if(a>t->val and b>t->val){
                t=t->right;
            }
            else{
                break;
            }
        }
        return t;
    }
};