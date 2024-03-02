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
    int maxDepth(TreeNode* root, int a=1) {
        
        if(root == nullptr) return 0;
        if(root->left == nullptr && root->right == nullptr) return a;
        if(root->left == nullptr) return maxDepth(root->right, a+1);
        if(root->right == nullptr) return maxDepth(root->left, a+1); 
        return max(maxDepth(root->left, a+1), maxDepth(root->right, a+1));

    }
};