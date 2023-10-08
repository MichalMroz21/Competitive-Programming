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

    void dfs(TreeNode* root, TreeNode*& build){

        if(root == nullptr) return;

        dfs(root->left, build);

        build->right = new TreeNode(root->val);
        build = build->right;

        dfs(root->right, build);
    }

    TreeNode* increasingBST(TreeNode* root) {

        TreeNode* build = new TreeNode();
        TreeNode* buildCopy = build;

        dfs(root, build);

        return buildCopy->right;
    }
};