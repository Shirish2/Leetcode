/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void ans(Node* root,int a,vector<vector<int>> &res){
        if(a==res.size()){
            res.push_back({root->val});
        }
        else{
            res[a].push_back(root->val);
        }
        for(Node* b: root->children){
                ans(b,a+1,res);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return{};
        vector<vector<int>> res;
        ans(root,0,res);
        return res;
    }
};