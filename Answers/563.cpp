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

    int dfs(TreeNode* root, int& sumTilt){
        if(root == nullptr) return 0;

        int left = dfs(root->left, sumTilt);
        int right = dfs(root->right, sumTilt);

        sumTilt += abs(left - right);

        return root->val + left + right;
    }

    int findTilt(TreeNode* root) {
         int sumTilt{};
         dfs(root, sumTilt);
         return sumTilt;
    }
};