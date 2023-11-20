/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    Node* cloneTree(Node* root) {
        if(root == nullptr) return nullptr;

        Node* newRoot = new Node(root->val);

        stack<pair<Node*, Node*>> dfs{};

        for(int i = root->children.size() - 1; i >= 0; i--){
            dfs.push({root->children[i], newRoot});
        }

        while(!dfs.empty()){

            pair<Node*, Node*> curr = dfs.top();
            dfs.pop();

            if(curr.second == nullptr) continue;

            curr.second->children.push_back(curr.first ? new Node(curr.first->val) : nullptr);

            for(int i = curr.first->children.size() - 1; i >= 0; i--){
                dfs.push({curr.first->children[i], curr.second->children.back()});
            }
        }

        return newRoot;
    }
};
