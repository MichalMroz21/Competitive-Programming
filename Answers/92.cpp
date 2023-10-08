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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* ret{};
        ListNode* justBeforeTheRange{};
        ListNode* prev{};
        ListNode* firstOneInRange{};
        
        int i = 1;

        while(head != nullptr){

            if(i < left && ret == nullptr) ret = head;
            if(i == right && ret == nullptr) ret = head;

            if(i == left - 1) justBeforeTheRange = head;
            if(i == left) firstOneInRange = head;

            ListNode* save = head->next;
            
            if(i > left && i <= right){

                head->next = prev;
                if(i == right && justBeforeTheRange != nullptr) justBeforeTheRange->next = head;  
                
            }

            if(i == right) firstOneInRange->next = save;

            prev = head;
            head = save; 
            i++;
        }

        return ret;
    }
};