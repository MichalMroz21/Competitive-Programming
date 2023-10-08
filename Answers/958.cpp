class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
       
        queue<TreeNode*> bfs{};
        bool nullMet = false;

        bfs.push(root);

        while(!bfs.empty()){

          TreeNode* curr = bfs.front();
          bfs.pop();

          if(curr == nullptr){nullMet = true; continue;}
          if(nullMet == true) return false;

          bfs.push(curr->left);
          bfs.push(curr->right);

        }

        return true;
    }
};