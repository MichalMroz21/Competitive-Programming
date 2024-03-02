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

    TreeNode* insertRecursively(vector<int>& nums, int L, int R){

        if(R < L) return nullptr;
        int m = L + (R - L)/2;
        int key = nums[m];

        TreeNode* root = new TreeNode(key);
 
        root->left = insertRecursively(nums, L, m - 1);
        root->right = insertRecursively(nums, m + 1, R);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return insertRecursively(nums, 0, nums.size() - 1);

    }
};