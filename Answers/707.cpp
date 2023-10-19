class Node {
public:
    Node(int val, Node* next, Node* prev) : val(val), next(next), prev(prev){}

    int val;

    Node* next;
    Node* prev;
};

class MyLinkedList {
public:
    Node* head{};
    Node* tail{};

    int n{};

    MyLinkedList() {}

    Node* getNode(int index){

        int i{};
        Node* start{head};
        bool direction{};

        if(index >= n || index < 0) return nullptr;
        
        if(index > n/2){
            start = tail;
            index = n - index - 1;
            direction = 1;
        }

        while(i++ < index){
            start = direction ? start->prev : start->next;
        }

        return start;
    }
    
    int get(int index) {
        Node* ret = getNode(index);
        if(ret == nullptr) return -1;
        return ret->val;
    }
    
    void addAtHead(int val) {
        head = new Node(val, head, nullptr);
        if(head->next) (head->next)->prev = head;
        if(tail == nullptr) tail = head;
        n++;
    }
    
    void addAtTail(int val) {    
        tail = new Node(val, nullptr, tail);
        if(tail->prev) (tail->prev)->next = tail;
        if(head == nullptr) head = tail;
        n++;
    }
    
    void addAtIndex(int index, int val) {

        if(index == n) addAtTail(val);
        else if(index == 0) addAtHead(val);
        else{
            Node* addAt = getNode(index);
            if(addAt == nullptr) return;

            (addAt->prev)->next = new Node(val, addAt, addAt->prev);
            addAt->prev = (addAt->prev)->next;
            n++;
        }
    }
    
    void deleteAtIndex(int index) {

        Node* toDelete = getNode(index);
        if(toDelete == nullptr) return;

        if(index == 0){
            head = head->next;
            if(n == 1) tail = nullptr; 
        }

        else if(index == n - 1){
            tail = tail->prev;
            tail->next = nullptr;
        }

        else{
            (toDelete->prev)->next = toDelete->next;
            (toDelete->next)->prev = toDelete->prev;
        }

        delete toDelete;
        n--;
    }
};