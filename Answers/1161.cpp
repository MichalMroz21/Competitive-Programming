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
    int maxLevelSum(TreeNode* root) {
        
        pair<int, int> levelSum{make_pair(INT_MIN, 1)};

        queue<TreeNode*> bfs{};

        bfs.push(root);
        
        int currLevel{1};

        while(!bfs.empty()){

            int n = bfs.size(), currSum{};

            while(n--){

                TreeNode* curr{bfs.front()};
                bfs.pop();

                currSum += curr->val;

                if(curr->left != nullptr) bfs.push(curr->left);
                if(curr->right != nullptr) bfs.push(curr->right);
   
            }

            if(currSum > levelSum.first) levelSum = make_pair(currSum, currLevel);
            currLevel++;
        }

        return levelSum.second;
    }
};