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

    //0 - left, 1 - right, -1 - none
    void dfs(bool direction, int& maxCount, int currCount, TreeNode* root){

        if(root == nullptr) return;
        if(currCount > maxCount) maxCount = currCount;

        dfs(0, maxCount, currCount * (direction == 1) + 1, root->left);
        dfs(1, maxCount, currCount * (direction == 0) + 1, root->right);    
    }

    int longestZigZag(TreeNode* root) {
        
        int maxCount = 0;

        dfs(0, maxCount, 0, root);

        return maxCount;
    }
};