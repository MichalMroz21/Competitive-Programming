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
    vector<int> inorderTraversal(TreeNode* root) {    
        
        stack<pair<TreeNode*, optional<int>>> dfs{};
        vector<int> ret{};

        dfs.push(make_pair(root, nullopt));

        while(!dfs.empty()){

            pair<TreeNode*, optional<int>> temp = dfs.top();
            dfs.pop();

            if(temp.second != nullopt) ret.push_back(*temp.second); 
            if(temp.first == nullptr) continue;

            dfs.push(make_pair(temp.first->right, temp.first->val));
            dfs.push(make_pair(temp.first->left, nullopt));

        }

        return ret;

    }
};