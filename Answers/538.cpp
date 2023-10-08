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

    void inorderDFS(TreeNode*& root, int& sum){

        if(root == nullptr) return;

        inorderDFS(root->right, sum);

        int temp = root->val;
        root->val += sum;
        sum += temp;

        inorderDFS(root->left, sum);
    }

    TreeNode* convertBST(TreeNode* root) {
        
        int bstSum = 0;

        inorderDFS(root, bstSum);

        return root;
    }
};