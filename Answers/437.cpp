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

    int ans{};

    int pathSum(TreeNode* root, int sum) {
        if(root){
            dfs(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);
        }

        return ans;
    }

    void dfs(TreeNode* root, int sum){
        if(root == nullptr) return;
        if(root->val==sum) ans++;

        int substr{sum};

        if(root->val >= 0 && substr >= INT_MIN + root->val)
            substr -= root->val;
        
        if(root->val < 0 && substr <= INT_MAX + root->val)
            substr -= root->val;

        dfs(root->left, substr);
        dfs(root->right, substr);
    }
};