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
    void reorderList(ListNode* head) {
        ListNode* t=head;
        ListNode* t1=head;
        vector<int> v;
        vector<int> v1;
        while(t!=nullptr){
            v.push_back(t->val);
            t=t->next;
        }
        int m=v.size();
        for(int i=0,j=m-1;i<=j;i++,j--){
            
                v1.push_back(v[i]);
                v1.push_back(v[j]);
        }
        if(m%2==1){
            v1.pop_back();
        }
        int i=0;
        while(t1!=nullptr){
            t1->val=v1[i++];
            t1=t1->next;
        }
    }
};