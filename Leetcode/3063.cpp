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
    ListNode* frequenciesOfElements(ListNode* head) {
        
        unordered_map<int, ListNode*> freqMap{};

        ListNode* ret{};
        ListNode* curr{};

        while(head){

            if(freqMap[head->val]){
                freqMap[head->val]->val++;
            }
            else{
                if(ret) {
                    curr->next = freqMap[head->val] = new ListNode(1);
                    curr = curr->next;
                }
                else curr = ret = freqMap[head->val] = new ListNode(1);
            }

            head = head->next;
        }

        return ret;
    }
};