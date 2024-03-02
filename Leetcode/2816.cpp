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

    ListNode* reverseList(ListNode* head){

        ListNode* prev{};

        while(head){

            ListNode* temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }

        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        
        head = reverseList(head);

        ListNode* root = head;
        ListNode* last{};

        int carry{};

        while(head){

            int newVal = head->val * 2 + carry;

            head->val = newVal % 10;

            carry = newVal / 10;

            last = head;
            head = head->next;
        }

        if(carry) last->next = new ListNode(carry);
        return reverseList(root);
    }
};