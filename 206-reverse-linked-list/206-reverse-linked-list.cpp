/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> v;
        ListNode* t=head;
        while(t!=0){
            v.emplace_back(t->val);
            t=t->next;
        }
        t=head;
        int n=v.size();
        
        for(int i=n-1;i>=0;i--){
            t->val=v[i];
            t=t->next;
        }
        t=head;
        return t;
    }
};