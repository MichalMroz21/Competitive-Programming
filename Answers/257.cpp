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

    void dfs(TreeNode* root, string& combination, vector<string>& allPaths){

        if(root->left == nullptr && root->right == nullptr){
            allPaths.push_back(combination);
        }

        vector<TreeNode*> temp = {root->left, root->right};
        
        for(auto& i : temp){

            if(i == nullptr) continue;

            string temp = "->" + to_string(i->val);
            for(auto& j : temp) combination.push_back(j);
            dfs(i, combination, allPaths);
            combination.erase(combination.begin() + combination.size() - temp.size(), combination.end());

        }

    }

    vector<string> binaryTreePaths(TreeNode* root) {

        if(root == nullptr) return {};

        string combination{};
        vector<string> allPaths{};

        string temp = to_string(root->val);
        for(auto& i : temp) combination.push_back(i);

        dfs(root, combination, allPaths);
        return allPaths;
    }
};