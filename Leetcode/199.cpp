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

    vector<int> rightSideView(TreeNode* root) {
        
        queue<TreeNode*> bfs{};
        vector<int> ans{};

        if(root == nullptr) return {};

        bfs.push(root);

        while(!bfs.empty()){

            int n = bfs.size();

            while(n--){

                TreeNode* curr = bfs.front();
                bfs.pop();

                if(n == 0) ans.push_back(curr->val);

                if(curr->left != nullptr) bfs.push(curr->left);
                if(curr->right != nullptr) bfs.push(curr->right);

            }

        }

        return ans;
    }
};