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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* left = head;
        ListNode* right = head;

        right = right->next;

        int nodesSum{};

        while(right != nullptr){

            if(right->val == 0){

                right->val = nodesSum;
                nodesSum = 0;

                left->next = right;
                left = right;
                right = right->next;

            }

            else{
                nodesSum += right->val;
                right = right->next;
            }
        }

        return head->next;
    }
};