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
    vector<int> preorderTraversal(TreeNode* root) {
        
            stack<TreeNode*> dfs{};
            vector<int> ret{};
            dfs.push(root);

            while(!dfs.empty()){

                TreeNode* temp = dfs.top();
                dfs.pop();
                if(temp == nullptr) continue;

                ret.push_back(temp->val);

                dfs.push(temp->right);
                dfs.push(temp->left);

            }

            return ret;
    }
};