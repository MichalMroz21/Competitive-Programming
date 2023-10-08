/**
 * Definition for a rope tree node.
 * struct RopeTreeNode {
 *     int len;
 *     string val;
 *     RopeTreeNode *left;
 *     RopeTreeNode *right;
 *     RopeTreeNode() : len(0), val(""), left(nullptr), right(nullptr) {}
 *     RopeTreeNode(string s) : len(0), val(std::move(s)), left(nullptr), right(nullptr) {}
 *     RopeTreeNode(int x) : len(x), val(""), left(nullptr), right(nullptr) {}
 *     RopeTreeNode(int x, RopeTreeNode *left, RopeTreeNode *right) : len(x), val(""), left(left), right(right) {}
 * };
 */
class Solution {
public:
    char getKthCharacter(RopeTreeNode* root, int k) {

        int left{}, right{};

        if(root->left != nullptr){
            left = max((int)root->left->val.size(), root->left->len);
        }

        if(root->right != nullptr){
            right = max((int)root->right->val.size(), root->right->len);
        }
        
        if(left == 0 && right == 0){
            return root->val[k - 1];
        }

        if(k <= left) return getKthCharacter(root->left, k);
        if(k > left) return getKthCharacter(root->right, k - left);

        return 0;
    }
};