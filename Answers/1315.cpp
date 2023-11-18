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

    int dfs(TreeNode* root, int grand, int parent){

        if(root == nullptr) return 0;

        int a{};

        if(grand % 2 == 0) a = root->val;

        return a + dfs(root->left, parent, root->val) + dfs(root->right, parent, root->val);
    }

    int sumEvenGrandparent(TreeNode* root) {
        return dfs(root, -1, -1);      
    }
};