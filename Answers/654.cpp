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

    void constructRec(vector<int>::iterator left, vector<int>::iterator right, TreeNode*& root){

        auto max_elem = max_element(left, right);

        root->val = *max_elem;

        if(max_elem != left){
            root->left = new TreeNode();
            constructRec(left, max_elem, root->left);
        }

        if(max_elem != right - 1){
            root->right = new TreeNode();
            constructRec(max_elem + 1, right, root->right);
        }

    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        TreeNode* root = new TreeNode();  

        constructRec(nums.begin(), nums.end(), root);

        return root;
    }
};