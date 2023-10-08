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
    ListNode* deleteMiddle(ListNode* head) {

        ListNode* midPointer = head;
        ListNode* normalPointer = head;
        ListNode* prev = nullptr;

        while(normalPointer != nullptr && normalPointer->next != nullptr){

            normalPointer = normalPointer->next;
           
            prev = midPointer;
            midPointer = midPointer->next;

            if(normalPointer == nullptr) break;

            normalPointer = normalPointer->next;

        }

        if(prev == nullptr) return nullptr;
        prev->next = midPointer->next;
        return head;
    }
};