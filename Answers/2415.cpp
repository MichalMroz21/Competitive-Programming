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
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        queue<TreeNode*> bfs{};

        int level{};

        if(root) bfs.push(root);

        vector<int> values{};

        while(!bfs.empty()){

            int n = bfs.size();

            vector<int> row{};

            while(n){

                TreeNode* curr = bfs.front();
                bfs.pop();

                if(level & 1){
                    curr->val = values[n - 1];
                }

                if(curr->left) {bfs.push(curr->left); row.push_back(curr->left->val);}
                if(curr->right) {bfs.push(curr->right); row.push_back(curr->right->val);}
                n--;
            }

            values = row;
            level++;
        }

        return root;

    }
};