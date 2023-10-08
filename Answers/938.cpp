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

    void dfs(TreeNode* root, int& sum, int low, int high){

        if(root == nullptr) return;

        if(root->val >= low && root->val <= high) sum += root->val;

        dfs(root->right, sum, low, high);
        dfs(root->left, sum, low, high);

    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int sum{};

        dfs(root, sum, low, high);

        return sum;

    }
};