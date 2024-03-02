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
    int deepestLeavesSum(TreeNode* root) {
        
        queue<TreeNode*> bfs{};

        bfs.push(root);

        int deepestSum{};

        while(!bfs.empty()){

            int n = bfs.size();
            deepestSum = 0;

            while(n != 0){

                TreeNode* curr = bfs.front();
                bfs.pop();

                deepestSum += curr->val;

                if(curr->left != nullptr) bfs.push(curr->left);
                if(curr->right != nullptr) bfs.push(curr->right);

                n--;
            }
        }

        return deepestSum;

    }
};