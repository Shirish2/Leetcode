/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headB){
            ListNode* t=headA;
            while(t){
                 if(headB==t){
                     return headB;
                 }
                     t=t->next;
                 
                
            }
            headB=headB->next;
        }
        return 0;
    }
};