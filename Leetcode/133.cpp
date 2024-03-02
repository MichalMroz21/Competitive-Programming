/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;

        queue<Node*> bfs{};
        queue<Node*> retBfs{};
        unordered_map<int, bool> visited{};
        unordered_map<int, Node*> nodeHistory{};

        Node* ret = new Node(node->val);
        Node* retCopy = ret;

        nodeHistory[ret->val] = ret;

        bfs.push(node);
        retBfs.push(ret);

        while(!bfs.empty()){

            Node* curr = bfs.front();
            bfs.pop();
            ret = retBfs.front();
            retBfs.pop();

            if(visited[curr->val]) continue;
            visited[curr->val] = true; 

            for(auto i : curr->neighbors){

                if(nodeHistory[i->val] == nullptr){
                    nodeHistory[i->val] = new Node(i->val);
                }

                ret->neighbors.push_back(nodeHistory[i->val]);

                bfs.push(i);
                retBfs.push(nodeHistory[i->val]);
            }

        }

        return retCopy;
   }
};