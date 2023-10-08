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

    void dfs(TreeNode* root, TreeNode* parent, int depth, vector<pair<int, TreeNode*>>& depths, int x, int y){

        if(root == nullptr) return;

        if(root->val == x || root->val == y){
            depths.push_back(make_pair(depth, parent));
        }

        dfs(root->left, root, depth + 1, depths, x, y);
        dfs(root->right, root, depth + 1, depths, x, y);

    }

    bool isCousins(TreeNode* root, int x, int y) {
        
        vector<pair<int, TreeNode*>> depths{};

        dfs(root, nullptr, 0, depths, x, y);
        
        if(depths[0].first == depths[1].first && depths[0].second != depths[1].second) return true;

        return false;

    }
};