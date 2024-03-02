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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avgValues{};

        queue<TreeNode*> bfs{};

        bfs.push(root);

        while(!bfs.empty()){

            int n = bfs.size(), nCopy = n;
            double avg{};

            while(n--){
                TreeNode* curr = bfs.front();
                bfs.pop();

                if(curr == nullptr){
                    nCopy--;
                    continue;
                }

                avg += curr->val;

                bfs.push(curr->left);
                bfs.push(curr->right);    
            }

            if(nCopy != 0){
                avg /= nCopy;
                avgValues.push_back(avg);
            }
        }

        return avgValues;
    }
};