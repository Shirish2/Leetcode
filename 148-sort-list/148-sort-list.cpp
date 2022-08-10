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
    ListNode* sm(ListNode* a,ListNode* b){
        if(!a){
            return b;
        }
        if(!b){
            return a;}
        ListNode* ans;
        if(a->val<b->val){
            ans=a;
            ans->next=sm(a->next,b);
        }
        else{
            ans=b;
            ans->next=sm(a,b->next);
        }
        return ans;
    }
    
    
    ListNode* fm(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }   
    
    
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next){
            return head;
        }
        ListNode* m=fm(head);
        ListNode* mn=m->next;
        m->next=NULL;
        head=sortList(head);
        mn=sortList(mn);
        return sm(head,mn);
    }   
};