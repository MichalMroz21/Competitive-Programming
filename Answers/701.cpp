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

    void insertNode(TreeNode** root, int val){

        if(*root == nullptr){
            *root = new TreeNode(val); 
            return;
        }

        if((*root)->val < val){

            if((*root)->right != nullptr){
                insertNode(&(*root)->right, val);
            }

            else{
                (*root)->right = new TreeNode(val);
                return;
            }
        }

        if((*root)->val > val){

            if((*root)->left != nullptr){
                insertNode(&(*root)->left, val);
            }

            else{
                (*root)->left = new TreeNode(val);
                return;
            }
        }

        return;
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        insertNode(&root, val);
        return root;

    }
};