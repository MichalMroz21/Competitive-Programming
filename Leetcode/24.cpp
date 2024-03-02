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
    ListNode* swapPairs(ListNode* head) {
        
        if(head == nullptr) return nullptr;
        ListNode* returnHead = head;

        ListNode* prev = nullptr;
        ListNode* prevPrev = nullptr;

        prev = head;
        head = head->next;
        if(head != nullptr) returnHead = head;

        while(head != nullptr){

            if(prevPrev != nullptr) prevPrev->next = head;
            prev->next = head->next;
            head->next = prev;

            head = prev;

            prevPrev = head;
            head = head->next;

            if(head == nullptr) break;

            prev = head;
            head = head->next;
        }


        return returnHead;
    }
};