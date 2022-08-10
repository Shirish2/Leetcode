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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right || !head->next){
            return head;
        }
        ListNode* t=nullptr,*t1=head;
        for(int i=0;i<left-1;i++){
            t=t1;
            t1=t1->next;
        }
        ListNode* t2=t,*t3=t1;
        for(int i=0;i<=right-left;i++){
            ListNode* v=t1->next;
            t1->next=t;
            t=t1;
            t1=v;
        }
        t3->next=t1;
        if(!t2) {
            return t;
        }
        t2->next=t;
        return head;
            
        
    }
};