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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* t=new ListNode(0,head);
        
        ListNode* v=t;
        while(head!=NULL && head->next!=NULL){
        if(head->next!=NULL && head->val==head->next->val){
            while(head->next!=NULL && head->val==head->next->val){
                head=head->next;
            }
            v->next=head->next;
        }
        else{
            v=v->next;
        }
            head=head->next;
    }
        return t->next;
    }
};