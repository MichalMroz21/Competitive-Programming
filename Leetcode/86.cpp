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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* headCopy = head;

        ListNode* before = nullptr;
        ListNode* after = nullptr;
        
        ListNode* ret = nullptr;
        ListNode* afterFirst = nullptr;

        while(head != nullptr){

            if(head->val < x){
                if(before == nullptr){
                    before = head;
                    ret = head;
                } 
                else{
                    before->next = head;
                    before = before->next;
                }
            }
            else{
                if(after == nullptr){
                    after = head;
                    afterFirst = head;
                }
                else{
                    after->next = head;
                    after = after->next;
                }
            }

            head = head->next;
        }

        if(before == nullptr) return headCopy;
        else{
            before->next = afterFirst;
        }
        if(after != nullptr) after->next = nullptr;
        
        return ret;
    }
};