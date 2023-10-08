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

    ListNode* reversedLinkedList(ListNode* head){

        ListNode* prev = nullptr;
        
        while(head != nullptr){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1 = reversedLinkedList(l1);
        l2 = reversedLinkedList(l2);

        ListNode* l3 = nullptr;
        ListNode* l3Beginning = nullptr;

        int carry{};

        while(l1 != nullptr || l2 != nullptr){

            if(l3 == nullptr) {
                l3 = new ListNode();
                l3Beginning = l3;
            }
            else {
                l3->next = new ListNode();
                l3 = l3->next;
            }

            int a{}, b{};

            if(l1 != nullptr) {a = l1->val; l1 = l1->next;}
            if(l2 != nullptr) {b = l2->val; l2 = l2->next;}

            int addition = a + b + carry;
            carry = addition / 10;
            l3->val = addition % 10;
        }

        if(carry) l3->next = new ListNode(carry);
        
        return reversedLinkedList(l3Beginning);
    }
};