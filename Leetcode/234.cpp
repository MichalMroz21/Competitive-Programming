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
    bool isPalindrome(ListNode* head) {
        
        //count the length
        int n{};

        ListNode* headCopy = head;

        while(headCopy != nullptr){
            n++;
            headCopy = headCopy->next;
        }

        if(n == 1) return true;
        //reverse the half of linked list

        //set pointer at the middle rounded down if even n
        headCopy = head;

        int halfLength = n/2;
        int nCopy = n;

        while(halfLength != nCopy - 1){
            headCopy = headCopy->next;
            nCopy--;
        }

        //reverse the half
        ListNode* prev = nullptr;

        while(headCopy != nullptr){
            ListNode* next = headCopy->next;
            headCopy->next = prev;
            prev = headCopy;
            headCopy = next;
        }

        headCopy = prev; //setting last pointer
        nCopy = n;

        while(halfLength != nCopy){

            if(head->val != headCopy->val) return false;

            headCopy = headCopy->next;
            head = head->next;

            nCopy--;
        }

        return true;
    }
};