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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t= new ListNode();
        t->next=head;
        ListNode* f=t;
        ListNode* s=t;
        int m=n;
        while(m--){
            f=f->next;
            
        }
        while(f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return t->next;
    }
};