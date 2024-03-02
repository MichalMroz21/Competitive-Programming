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

    ListNode* reverseNodes(ListNode* head){

        ListNode* prev = nullptr;

        while(head){

            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }


    int pairSum(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;

        ListNode* headCopy = head;

        while(fast){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* reversedHead = reverseNodes(slow);

        int ret{};
        while(reversedHead){

            ret = max(ret, reversedHead->val + headCopy->val);
            headCopy = headCopy->next;
            reversedHead = reversedHead->next;
        }

        return ret;
    }
};