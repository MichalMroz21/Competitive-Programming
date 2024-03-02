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

    void dfsBacktrackingPathFind(TreeNode* tree, string& path, TreeNode* target, bool& targetFound, string& realPath){

        if(tree == nullptr) return;

        if(tree == target) {
            targetFound = true;
            realPath = path;
        }

        if(targetFound == false){
            path.push_back('L');
            dfsBacktrackingPathFind(tree->left, path, target, targetFound, realPath);
            path.pop_back();

            path.push_back('R');
            dfsBacktrackingPathFind(tree->right, path, target, targetFound, realPath);
            path.pop_back();
        }
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        string path{}, realPath{};
        bool targetFound = false;

        dfsBacktrackingPathFind(original, path, target, targetFound, realPath);

        for(auto& ch : realPath){
            if(ch == 'L') cloned = cloned->left;
            else cloned = cloned->right;
        }

        return cloned;
    }
};