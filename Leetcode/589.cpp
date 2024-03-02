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

    vector<int> preorder(Node* root) {
        vector<int> res{};
        
        stack<Node*> dfs{};

        dfs.push(root);

        while(!dfs.empty()){

            Node* rootTemp = dfs.top();
            dfs.pop();

            if(rootTemp == nullptr) continue;

            res.push_back(rootTemp->val);

            for(int i=rootTemp->children.size() - 1; i>=0; i--){
                dfs.push(rootTemp->children[i]);
            }

        }

        return res;
    }
};