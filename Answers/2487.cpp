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

    ListNode* reverseList(ListNode* root){

        ListNode* prev{};

        while(root){

            ListNode* temp = root->next;
            root->next = prev;
            prev = root;
            root = temp;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        
        head = reverseList(head);

        int mx{};

        ListNode* prev{};
        ListNode* root{head};

        while(head){

            mx = max(mx, head->val);

            if(head->val < mx){
                prev->next = head->next;
            }

            else prev = head;

            head = head->next;
        }

        return reverseList(root);
    }
};