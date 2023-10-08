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

    int dfs(TreeNode* root, int n){

        n += root->val;

        int retSum{};

        if(root->left == nullptr && root->right == nullptr) return n;

        if(root->left != nullptr) retSum += dfs(root->left, n * 2);
        if(root->right != nullptr) retSum += dfs(root->right, n * 2);

        return retSum;

    }

    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }
};