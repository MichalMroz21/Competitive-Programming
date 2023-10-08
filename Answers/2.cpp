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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int displacement{};

        ListNode* temp = new ListNode(1);

        ListNode* l1Prev = l1;
        ListNode* l2Prev = l2;

        ListNode* l1Head = l1;
        ListNode* l2Head = l2;
        int whichLonger = 1;

        do{

            int key{};
            int a{};
            int b{};

            if(l1 != nullptr) a = l1->val;
            if(l2 != nullptr) b = l2->val;

            key = a + b + displacement;
            displacement = 0;

            if(key >= 10){
                key = key % 10;
                displacement = 1;
            }

            if(l2 == nullptr){
                l1->val = key;
                l1Prev = l1;
                l1 = l1->next;
                whichLonger = 1;
            }

            else if(l1 == nullptr){
                l2->val = key;
                l2Prev = l2;
                l2 = l2->next;
                whichLonger = 2;
            }

            else{
                l1->val = key;
                l2->val = key;
                l1Prev = l1;
                l2Prev = l2;
                l1 = l1->next;
                l2 = l2->next;
            }

        } while( !( l1 == nullptr && l2 == nullptr ) );

        if(displacement == 1){
            if(whichLonger == 1){
                l1Prev->next = temp;
            }
            else{
                l2Prev->next = temp;
            }
        }

        if(whichLonger == 1) return l1Head;
        else return l2Head;

    }
};
