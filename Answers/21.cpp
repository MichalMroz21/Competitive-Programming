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

    void putNextAndShift(ListNode** list, int key){
        ListNode* temp = new ListNode(key);
        (*list)->next = temp;
        *list = (*list)->next;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        int list1Prev{};
        int list2Prev{};

        ListNode* retList = new ListNode();
        ListNode* retListCopy = retList;

        while(!(list1 == nullptr && list2 == nullptr)){

            if(list1 == nullptr){
                putNextAndShift(&retList, list2->val);
                list2 = list2->next;
                continue;
            } 

            if(list2 == nullptr){
                putNextAndShift(&retList, list1->val);
                list1 = list1->next;
                continue;
            }

            int a = list1->val;
            int b = list2->val;

            if(a <= b){
                putNextAndShift(&retList, list1->val);
                list1 = list1->next;
            }

            else{
                putNextAndShift(&retList, list2->val);
                list2 = list2->next;
            }

        }
        
        return retListCopy->next;
    }
};