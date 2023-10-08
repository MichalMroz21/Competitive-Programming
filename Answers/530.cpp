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

    void getMinimumAndMaximum(TreeNode* root, int& min_diff, int& prev){

        if(root == nullptr) return;

        getMinimumAndMaximum(root->left, min_diff, prev);

        int val = root->val;

        if(prev != -1) min_diff = min(min_diff, abs(prev - val));
            
        prev = val;

        getMinimumAndMaximum(root->right, min_diff, prev);

    }

    int getMinimumDifference(TreeNode* root) {

        int min_diff{INT_MAX}, prev = -1;

        getMinimumAndMaximum(root, min_diff, prev);

        return min_diff;
    }
};