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

    int closestValue(TreeNode* root, double target) {

        TreeNode* side = root->val < target ? root->right : root->left;

        if(side == nullptr) return root->val;

        int res = closestValue(side, target);

        if(abs(res - target) < abs(root->val - target))
            return res;
        
        if(abs(res - target) == abs(root->val - target)) 
            return min(root->val, res);

        return root->val;
    }
};