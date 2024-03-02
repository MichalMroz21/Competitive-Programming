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

    TreeNode* chooseSide(bool side, TreeNode* root){
        return side ? root->right : root->left;
    }

    void performDeletionOnNode(TreeNode*& node, pair<bool, TreeNode*>& prev, TreeNode*& root){

        TreeNode* nodeToDelete = node;

        if(node->left == nullptr && node->right == nullptr){

            if(prev.second == nullptr) {root = nullptr; return;}
            
            if(prev.first == 0) prev.second->left = nullptr;
            else prev.second->right = nullptr;
            
            return;
        }

        bool searchOnRight = node->left == nullptr && node->right != nullptr;

        prev = {searchOnRight, node};
        node = chooseSide(searchOnRight, node);

        while(chooseSide(!searchOnRight, node) != nullptr) {
            prev = {!searchOnRight, node};
            node = chooseSide(!searchOnRight, node);
        }

        swap(node->val, nodeToDelete->val);
        performDeletionOnNode(node, prev, root);
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        
        TreeNode* rootCopy = root;

        pair<bool, TreeNode*> prev = make_pair(0, nullptr);

        while(rootCopy != nullptr){

            if(rootCopy->val == key) performDeletionOnNode(rootCopy, prev, root);
            
            bool side = rootCopy->val <= key; //1 - right, 0 - left

            prev = {side, rootCopy};
            rootCopy = chooseSide(side, rootCopy);
        }
        
        return root;
    }
};