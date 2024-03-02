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

    int dfs(TreeNode* root, bool& bal, int height){

        if(root == nullptr) return height;

        int heightLeft = dfs(root->left, bal, height + 1);
        int heightRight = dfs(root->right, bal, height + 1);

        if(abs(heightLeft - heightRight) > 1) bal = false;
        return max(heightLeft, heightRight);
    }

    bool isBalanced(TreeNode* root) {
        
        bool bal = true;
        dfs(root, bal, 0);

        return bal;
    }
};