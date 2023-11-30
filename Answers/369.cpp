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
        ListNode* rightMost{};
        ListNode* root{head};

        while(head){

            if(head->val != 9) rightMost = head;
            head = head->next;
        }

        if(rightMost) head = rightMost->next;
        else head = root;

        while(head){
            head->val = 0;
            head = head->next;
        }

        if(rightMost) rightMost->val++;

        else {
            ListNode* ret = new ListNode(1);
            ret->next = root;
            return ret;
        }

        return root;
    }
};
