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
        
        int prevValue{};
        ListNode* prev = nullptr;
        ListNode* headCopy = head;

        while(head != nullptr){

            if(head->val == prevValue && prev != nullptr){

                prev->next = head->next;

            }

            else{
                prevValue = head->val;
                prev = head;
            }

            head = head->next;

        }

        return headCopy;

    }
};