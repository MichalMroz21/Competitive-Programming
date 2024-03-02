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
    ListNode* sortList(ListNode* head) {
        
        priority_queue<pair<int, ListNode*>> heap{};

        ListNode* ret{nullptr};
        ListNode* retCopy{nullptr};

        while(head != nullptr){
            heap.push(make_pair((-1) * head->val, head));
            head = head->next;
        }

        while(!heap.empty()){

            pair<int, ListNode*> curr{heap.top()};
            heap.pop();

            curr.first *= -1;

            if(ret == nullptr){
                ret = curr.second;
                retCopy = ret;
            }
            else{
                ret->next = curr.second;
                ret = ret->next;
            }

        }

        if(ret != nullptr) ret->next = nullptr;

        return retCopy;

    }
};