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

    void dfs(int targetSum, TreeNode* root, vector<int>& comb, vector<vector<int>>& allComb){

        if(targetSum == 0 && root->left == nullptr && root->right == nullptr) {
            comb.push_back(root->val);
            allComb.push_back(comb);
            comb.pop_back();
        }

        if(root->left != nullptr){
            comb.push_back(root->val);
            dfs(targetSum - root->left->val, root->left, comb, allComb);
            comb.pop_back();
        }

        if(root->right != nullptr){
            comb.push_back(root->val);
            dfs(targetSum - root->right->val, root->right, comb, allComb);
            comb.pop_back();
        }

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> allComb{};
        vector<int> comb{};

        if(root != nullptr) dfs(targetSum - root->val, root, comb, allComb);

        return allComb;
    }
};