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
    ListNode* oddEvenList(ListNode* head) {

        if(head == nullptr) return nullptr;

        ListNode* oddPointer = head;
        ListNode* evenPointer = head->next;

        ListNode* oddPointerSave = oddPointer;
        ListNode* evenPointerSave = evenPointer;

        ListNode* prevOdd = nullptr;
        ListNode* prevEven = nullptr;

        while(oddPointer != nullptr){

            prevOdd = oddPointer;
            prevEven = evenPointer;

            oddPointer = oddPointer->next;
            if(oddPointer == nullptr) break;
            oddPointer = oddPointer->next;

            evenPointer = evenPointer->next;
            if(evenPointer == nullptr) break;
            evenPointer = evenPointer->next;

            prevEven->next = evenPointer;
            prevOdd->next = oddPointer;
        }

        prevOdd->next = evenPointerSave;
        return oddPointerSave;
    }
};