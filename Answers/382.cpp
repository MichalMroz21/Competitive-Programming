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

    ListNode* solHead{};

    Solution(ListNode* head) {
        
        solHead = head;
    }
    
    int getRandom() {
        
        static bool srandOnce = false;
        if(srandOnce == false){srand(time(NULL)); srandOnce = true;}

        int i = 0;
        int returnVal{}; 
        ListNode* curr = solHead;

        while(curr != nullptr){

            i++;
            if(rand() % i == 0) returnVal = curr->val;

            curr = curr->next;
        }
        
        return returnVal;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */