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
        
        ListNode* ret = head;

        ListNode* prev{};

        int prevDeleted{-111};

        while(head){

            if(head->val == prevDeleted || (head->next && head->next->val == head->val) ){
                if(prev) prev->next = head->next;
                else ret = head->next;

                prevDeleted = head->val;
            }

            else prev = head;

            head = head->next;
        }

        return ret;
    }
};