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
    bool isPalindrome(ListNode* head) {
        vector<int>  v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size()-1,m=0;
        while(m<n){
        if(v[m]!=v[n]){
            return false;
        }
            m++;
            n--;
        
        }
        return true;
    }
};