/**
 * // This is the ImmutableListNode's API interface.
 * // You should not implement it, or speculate about its implementation.
 * class ImmutableListNode {
 * public:
 *    void printValue(); // print the value of the node.
 *    ImmutableListNode* getNext(); // return the next node.
 * };
 */

class Solution {
public:
    void printLinkedListInReverse(ImmutableListNode* head) {
        
        int n{};

        ImmutableListNode* headCopy = head;

        while(headCopy != nullptr){
            n++;
            headCopy = headCopy->next;
        }

        int sqrtDecomposition = sqrt(n);

        

    }
};