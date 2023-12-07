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
    vector<ListNode*> splitCircularLinkedList(ListNode* list) {
        
        ListNode* first{list};
        ListNode* second{list};
        ListNode* prev{};
        ListNode* prevSec{};
        ListNode* secBeg{};

        while(first == list || (second != list && second->next != list) ){
            prev = first;
            first = first->next;
            prevSec = second->next;
            second = second->next->next;
        }

        if(second != list){
            secBeg = first->next;
            second->next = secBeg;      
        }
        else{
            secBeg = first;
            first = prev;
            prevSec->next = secBeg;
        }

        first->next = list;

        return vector<ListNode*>{list, secBeg};
    }
};