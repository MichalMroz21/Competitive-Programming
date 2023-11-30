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
    ListNode* plusOne(ListNode* head) {

        ListNode* sentinel = new ListNode(0);
        sentinel->next = head;
        ListNode* notNine = sentinel;

        while (head != nullptr) {
            if (head->val != 9) notNine = head;
            head = head->next;
        }

        notNine->val++;
        notNine = notNine->next;

        while (notNine != nullptr) {
            notNine->val = 0;
            notNine = notNine->next;
        }

        delete notNine;
        return sentinel->val != 0 ? sentinel : sentinel->next;
    }
};