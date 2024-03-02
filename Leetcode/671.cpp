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

    void dfs(TreeNode* root, set<int>& st){
        if(root == nullptr) return;

        st.insert(root->val);

        if(st.size() == 3){
            st.erase(std::prev(st.end()));
        }

        dfs(root->left, st);
        dfs(root->right, st);
    }

    int findSecondMinimumValue(TreeNode* root) {
        set<int> st{};
        dfs(root, st);
        if(st.size() < 2) return -1;
        return *st.rbegin();
    }
};