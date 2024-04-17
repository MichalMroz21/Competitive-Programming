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
    string smallestFromLeaf(TreeNode* root, string curr = "") {
        curr = string(1, 'a' + root->val) + curr;
        if(root->left == nullptr && root->right == nullptr) return curr;
        return min(root->left ? smallestFromLeaf(root->left, curr) : "|", root->right ? smallestFromLeaf(root->right, curr) : "|");
    }
};