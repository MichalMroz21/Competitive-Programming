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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* prev{head};
        ListNode* ret = head;

        head = head->next;

        while(head){

            prev->next = new ListNode(__gcd(head->val, prev->val), head);
            
            prev = head;
            head = head->next;
        }

        return ret;
    }
};