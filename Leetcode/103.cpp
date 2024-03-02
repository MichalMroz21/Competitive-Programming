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

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root == nullptr) return {};
        vector<vector<int>> ret{};

        int currentLevel{1};
        int nextLevel{};
        bool directionLeft = true;
        queue<TreeNode*>myQueue{};

        myQueue.push(root);
        vector<int> temp{};

        while(!myQueue.empty()){

            TreeNode* tempTree = myQueue.front();
            myQueue.pop();

            temp.push_back(tempTree->val);            

            if(tempTree->left != nullptr){
                myQueue.push(tempTree->left);
                nextLevel++;
            }

            if(tempTree->right != nullptr){
                myQueue.push(tempTree->right);
                nextLevel++;
            }

            currentLevel--;
            if(currentLevel == 0){
                currentLevel = nextLevel;
                nextLevel = 0;

                if(directionLeft == false) reverse(temp.begin(), temp.end());
                directionLeft = !directionLeft;

                ret.push_back(temp);
                temp.clear();
            }

        }

        return ret;
    }
};