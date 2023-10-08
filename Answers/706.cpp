class Node{
public:
    explicit Node(int key, int val, Node* next) : key(key), val(val), next(next) {}

    int val, key;
    Node* next;
};


class MyHashMap {
public:

    int n = 5000; //can be anything pretty much
    vector<Node*> nodes;

    MyHashMap() : nodes(n) {}
    
    void put(int key, int value) {
        remove(key);
        nodes[key % n] = new Node(key, value, nodes[key % n]);
    }
    
    int get(int key) {

        Node* node = nodes[key % n];

        while(node){
            if(node->key == key) return node->val;
            node = node->next;
        }

        return -1;
    }
    
    void remove(int key) {

        Node* node = nodes[key % n];
        Node* prev{};

        while(node){

            if(node->key == key){
                if(prev == nullptr){
                    nodes[key % n] = node->next;
                }

                else if(node->next == nullptr){
                    prev->next = nullptr;
                }
                
                else{
                    prev->next = node->next;                
                }

                delete node;
                break;
            }

            prev = node;
            node = node->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */