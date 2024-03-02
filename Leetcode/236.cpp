/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    bool dfsSearch(TreeNode* root, int p, int q, TreeNode** ans){

        if(root == nullptr) return false;

        bool l = dfsSearch(root->left, p, q, ans);
        bool r = dfsSearch(root->right, p, q, ans);

        if(l || r){
            if(root->val == p || root->val == q) *ans = root;
        }

        if(l && r){
            *ans = root;
        }

        if(l || r) return true;
        if(root->val == p || root->val == q) return true;

        return false;
    }


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode* ans = nullptr;
        dfsSearch(root, p->val, q->val, &ans);
        return ans;
    }
};