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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<pair<TreeNode*, int>> queue{};
        vector<vector<int>> ret{};

        int currentDepth{};
        queue.push(make_pair(root, currentDepth));

        vector<int> tempLevel{};

        while(!queue.empty()){

            pair<TreeNode*, int> currentNode = queue.front();
            queue.pop();

            if(currentNode.second > currentDepth){

                ret.push_back(tempLevel);
                tempLevel.clear();
                currentDepth = currentNode.second;

            }

            if(currentNode.first == nullptr) continue;

            tempLevel.push_back(currentNode.first->val);

            queue.push(make_pair(currentNode.first->left, currentDepth + 1));
            queue.push(make_pair(currentNode.first->right, currentDepth + 1));
        }

        return ret;

    }
};