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

    void dfs(TreeNode* root, int& minimumDepth, int depth){

        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr){
            if(minimumDepth != 0) minimumDepth = min(minimumDepth, depth);
            else minimumDepth = depth;
        }

        dfs(root->left, minimumDepth, depth + 1);
        dfs(root->right, minimumDepth, depth + 1);

    }

    int minDepth(TreeNode* root) {
        
        int minimumDepth{};
        dfs(root, minimumDepth, 1);

        return minimumDepth;
    }
};