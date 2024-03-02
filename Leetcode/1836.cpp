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
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
        unordered_map<int, int> countMap{};

        ListNode* root = head;

        while(head){
            countMap[head->val]++;
            head = head->next;
        }

        head = root;

        ListNode* prev{};

        while(head){
            if(countMap[head->val] > 1){
                if(prev) prev->next = head->next;
                else root = head->next;
            }
            else prev = head;

            head = head->next;
        }

        return root;
    }
};