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

    void dfs(TreeNode*& root, vector<int>& values, bool side){

        if(root == nullptr) return;

        values.push_back(root->val);

        dfs(root->left, values, 0);

        TreeNode* r = root->right;
        if(side == 0) root = nullptr;

        dfs(r, values, 1);
    }

    void flatten(TreeNode* root) {
        
        vector<int> values{};

        dfs(root, values, 1);

        int n = values.size();
        
        for(int i = 0; i < n; i++){

            root->val = values[i];

            if(root->right == nullptr && i + 1 != n){
                root->right = new TreeNode();
            }

            root = root->right;

        }

    }
};