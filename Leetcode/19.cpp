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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* iterate = head;
        ListNode* nPrev = head;
        ListNode* nPrevPrev = nullptr;

        while(iterate != nullptr){

            if(n <= 0) {
                nPrevPrev = nPrev; 
                nPrev = nPrev->next;
            }
            
            iterate = iterate->next;

            n--;
        }

        if(nPrevPrev == nullptr) {
           return head->next;
           
        }
        
        nPrevPrev->next = nPrev->next;
        return head;
    }
};