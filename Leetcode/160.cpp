/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int nA{};
        int nB{};

        ListNode* headACopy = headA;
        ListNode* headBCopy = headB;

        while(headA){
            nA++;
            headA = headA->next;
        }

        while(headB){
            nB++;
            headB = headB->next;
        }

        while(headACopy != headBCopy && headACopy && headBCopy){

            if(nA > nB){
                nA--;
                headACopy = headACopy->next;
            }

            else if(nB > nA){
                nB--;
                headBCopy = headBCopy->next;
            }

            else{
                headACopy = headACopy->next;
                headBCopy = headBCopy->next;
            }
        }

        return headACopy;
    }
};