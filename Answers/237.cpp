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
    void deleteNode(ListNode* node) {
        
        ListNode* prev{};

        while(node){

            if(prev){
                swap(node->val, prev->val);
            }


            if(node->next == nullptr) prev->next = nullptr;
            
            prev = node;
            node = node->next;
        }

    }
};