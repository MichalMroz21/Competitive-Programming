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

    pair<int, int> dfs(TreeNode* root, int& answer){

        if(root == nullptr) return {0, 0};

        pair<int, int> first = dfs(root->left, answer);
        pair<int, int> second = dfs(root->right, answer);

        int cnt = first.first + second.first + 1;
        int sm = first.second + second.second + root->val;

        answer += ( (sm / cnt) == root->val);

        return {cnt, sm};
    }

    int averageOfSubtree(TreeNode* root) {
        int answer{};
        dfs(root, answer);
        return answer;
    }
};