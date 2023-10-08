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
    int maxDepth(Node* root) {
        
        queue<Node*> bfs{};

        if(root) bfs.push(root);

        int maxLevel{};

        while(!bfs.empty()){

            int n = bfs.size();

            while(n--){
                Node* curr = bfs.front();
                bfs.pop();
                
                for(auto child : curr->children){
                    if(child) bfs.push(child);
                }
            }

            maxLevel++;
        }

        return maxLevel;
    }
};