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


    void dfs(TreeNode* root, int& freq, int& elem, int& maxFreq, vector<int>& maxElems, bool maxFreqFound){

        if(root == nullptr) return;

        dfs(root->left, freq, elem, maxFreq, maxElems, maxFreqFound);

        if(root->val != elem){ //inorder traversal for sorted processing - deal with root->val between 2 dfs calls
            freq = 1; 
            elem = root->val;
        }
        else freq++; 
    
        if(maxFreqFound == false) maxFreq = max(maxFreq, freq); //find maxFreq in 1st traversal
        else if(freq == maxFreq) maxElems.push_back(elem); //add nodes with freq of maxFreq in 2nd traversal
        
        dfs(root->right, freq, elem, maxFreq, maxElems, maxFreqFound);
    }

    vector<int> findMode(TreeNode* root) {

        vector<int> maxElems{};

        int freq{}, elem{INT_MIN}, maxFreq{}; //elem - use optional instead of INT_MIN if nodes can have any int value.

        dfs(root, freq, elem, maxFreq, maxElems, false); 

        elem = INT_MIN; freq = 0;

        dfs(root, freq, elem, maxFreq, maxElems, true);

        return maxElems;
    }
};