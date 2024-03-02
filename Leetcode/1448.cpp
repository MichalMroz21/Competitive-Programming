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

    void dfsWithMax(int maxVal, int& count, TreeNode* root){

        if(root == nullptr) return;

        if(root->val >= maxVal) {
            count++;
            maxVal = root->val;
        }

        dfsWithMax(maxVal, count, root->left);
        dfsWithMax(maxVal, count, root->right);

    }

    int goodNodes(TreeNode* root) {
        
        int maxVal = INT_MIN, count{};

        dfsWithMax(maxVal, count, root);

        return count;
    }
};