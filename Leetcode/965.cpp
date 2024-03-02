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

    void dfs(TreeNode* root, bool& ret, int val){
        if(root == nullptr) return;
        if(root->val != val) ret = false;

        if(ret) dfs(root->left, ret, val);
        if(ret) dfs(root->right, ret, val);
    }

    bool isUnivalTree(TreeNode* root) {
        if(root == nullptr) return true;
        int val = root->val;
        bool ret = true;
        dfs(root, ret, val);
        return ret;
    }
};