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
    string gameResult(ListNode* head) {
        int teamOdd{}, teamEven{};

        while(head){
            if(head->next->val > head->val) teamOdd++;
            else teamEven++;

            head = head->next->next;
        }

        return teamOdd > teamEven ? "Odd" : teamEven > teamOdd ? "Even" : "Tie";
    }
};