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
    ListNode* sortLinkedList(ListNode* head) {
        
        ListNode* ret{head};
        ListNode* prev{};

        while(head){

            ListNode* nxt = head->next;

            if(head->val < 0 && prev){
                prev->next = head->next;
                head->next = ret;
                ret = head;
            }
            else prev = head;

            head = nxt;
        }

        return ret;
    }
};