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
   vector<int> v;
        void a(TreeNode* root, int dis, int k){
            if (root==NULL){
                return;
            }
            if(dis==k){
                v.push_back(root->val);
            }
            a(root->left,dis+1,k);
            a(root->right,dis+1,k);
        }
    int help(TreeNode* root, TreeNode* target, int k){
        if(root==NULL) return -1;
        if(root->val==target->val){
            a(root,0,k);
            return 1;
        }
        else {
        int l=help(root->left,target,k);
        int r=help(root->right,target,k);
        if(l!=-1){
            if(l==k){
                v.push_back(root->val);
            }
            a(root->right,l+1,k);
            return l+1;
        }
        else if(r!=-1){
            if(r==k){
                v.push_back(root->val);
            }
            a(root->left,r+1,k);
            return r+1;
        }
            return -1;
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        help(root,target,k);
        return v;
    }
};