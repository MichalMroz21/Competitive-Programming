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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* first = head;

        while(--k > 0){
            first = first->next;
        }

        ListNode* firstCopy = first;
        ListNode* second = head;

        while(firstCopy->next != nullptr){
            second = second->next;
            firstCopy = firstCopy->next;
        }

        swap(second->val, first->val);

        return head;
    }
};