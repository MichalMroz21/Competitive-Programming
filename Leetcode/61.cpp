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
    ListNode* rotateRight(ListNode* head, int k) {
        int n{};

        ListNode* root = head;

        while(head){
            n++;
            head = head->next;
        }

        if(n == 0) return nullptr;

        k %= n;

        if(k == 0) return root;

        int i{};

        ListNode* ret{};
        ListNode* cut{};
        ListNode* beg{root};

        while(root){

            i++;

            if(i == n - k){
                cut = root->next;
                root->next = nullptr;
                break;
            }

            root = root->next;
        }

        ret = cut;

        while(cut){

            if(cut->next == nullptr){
                cut->next = beg;
                break;
            }
            cut = cut->next;
        }

        return ret;
    }
};