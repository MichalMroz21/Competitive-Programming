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

    void dfs(TreeNode* root, vector<int>& inorder){

        if(root == nullptr) return;

        dfs(root->left, inorder);
        inorder.push_back(root->val);
        dfs(root->right, inorder);

        return;
    }


    bool isValidBST(TreeNode* root) {
        
        vector<int> inorder{};
        dfs(root, inorder);

        int i = 0;
        int j = i + 1;

        int n = inorder.size();

        while(j < n){

            if(inorder[j] <= inorder[i]) return false;

            i++;
            j++;
        }

        return true;
    }
};