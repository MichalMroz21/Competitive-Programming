class Node{
public:
    Node(int val, Node* next) : val(val), next(next) {}

    int val;
    Node* next;
};

class MyHashSet {
public:
    
    int n = 10000;
    vector<Node*> nodes;

    MyHashSet() : nodes(n) {}
    
    void add(int key) {
        if(contains(key) == false){
            nodes[key % n] = new Node(key, nodes[key % n]);
        }
    }
    
    void remove(int key) {
        Node* node = nodes[key % n];
        Node* prev{};

        while(node){

            if(node->val == key){

                if(prev == nullptr){
                    nodes[key % n] = node->next;
                }
                else{
                    prev->next = node->next;
                }

                delete node;
                return;
            }

            prev = node;
            node = node->next;
        }
    }
    
    bool contains(int key) {
        Node* node = nodes[key % n];

        while(node){
            if(node->val == key) return true;
            node = node->next;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */