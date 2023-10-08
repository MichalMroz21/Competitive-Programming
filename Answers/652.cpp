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

    string dfs(TreeNode* root, vector<TreeNode*>& res, unordered_map<string, int>& history){

        if(root == nullptr) return "null";
        
        string temp = to_string(root->val) + ',' + dfs(root->left, res, history) + ',' + dfs(root->right, res, history);

        if(history[temp] == 1) res.push_back(root);

        history[temp]++;

        return temp;

    }


    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        vector<TreeNode*> res{};
        unordered_map<string, int> history{};

        dfs(root, res, history);

        return res;
    }
};