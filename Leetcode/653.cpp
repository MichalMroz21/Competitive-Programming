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
    bool findTarget(TreeNode* root, int k) {
        
        queue<TreeNode*> bfs{};
        unordered_map<int, bool> searchHistory{};

        if(root == nullptr) return false;

        searchHistory[k - root->val] = true;
        bfs.push(root->left);
        bfs.push(root->right);

        while(!bfs.empty()){

            TreeNode* curr = bfs.front();
            bfs.pop();

            if(curr == nullptr) continue;

            if(searchHistory[curr->val]) return true;

            searchHistory[k - curr->val] = true;
            bfs.push(curr->left);
            bfs.push(curr->right);
        }

        return false;


    }
};