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
    bool isSymmetric(TreeNode* root) {
        
        queue<TreeNode*> queue{};

        queue.push(root);

        while(!queue.empty()){

            int n = queue.size();
            vector<optional<int>> oneLevel{};

            while(n){

                TreeNode* temp = queue.front();
                queue.pop();

                if(temp != nullptr){

                    oneLevel.push_back(temp->val);
                    queue.push(temp->left);
                    queue.push(temp->right);
                } 

                else oneLevel.push_back(nullopt);

                n--;
            }

            int i = 0;
            int j = oneLevel.size() - 1;
            
            while(i < j){

                if(oneLevel[i++] != oneLevel[j--]) return false;

            }

        }

        return true;

    }
};