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
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        
        int cnt{1}, removeCnt{}, notRemoveCnt{m};

        bool assignStart = false;

        ListNode* start{};
        ListNode* headCopy = head;

        while(head){

            ListNode* next = head->next;

            if(assignStart){
                start->next = head;
                assignStart = false;
                notRemoveCnt = m;
            }

            if(removeCnt == 0) notRemoveCnt--;

            if(removeCnt){
                removeCnt--;
                if(removeCnt == 0) assignStart = true;
            }

            if(notRemoveCnt == 0 && removeCnt == 0 && assignStart == false){
                start = head;
                start->next = nullptr;
                removeCnt = n;
            }

            head = next;
        }

        return headCopy;
    }
};