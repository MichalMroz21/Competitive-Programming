/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void findMistakesInOrder(TreeNode* root, bool& firstMistakeFound, TreeNode*& previous, pair<TreeNode*, TreeNode*>& mistakes){

        if(root == nullptr) return;

        findMistakesInOrder(root->left, firstMistakeFound, previous, mistakes);

        if(previous != nullptr){

            if(firstMistakeFound == false){
                if(root->val < previous->val){
                    firstMistakeFound = true;
                    mistakes.first = previous;
                    mistakes.second = root;
                }
            }

            else if(root->val < previous->val) mistakes.second = root;
        }

        previous = root; 

        findMistakesInOrder(root->right, firstMistakeFound, previous, mistakes);

    }

    void recoverTree(TreeNode* root) {
        
        pair<TreeNode*, TreeNode*> mistakes = make_pair(nullptr, nullptr);
        TreeNode* previous = nullptr;
        bool firstMistakeFound = false;
        findMistakesInOrder(root, firstMistakeFound, previous, mistakes);

        int temp = mistakes.first->val;
        mistakes.first->val = mistakes.second->val;
        mistakes.second->val = temp;

    }
};