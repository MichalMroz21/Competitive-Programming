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

    void dfs(vector<int>& leafs, TreeNode* root){

        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr)
            leafs.push_back(root->val);
        

        dfs(leafs, root->left);
        dfs(leafs, root->right);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> leafsFirst{}, leafsSecond{};

        dfs(leafsFirst, root1);
        dfs(leafsSecond, root2);

        return leafsFirst == leafsSecond;
    }
};