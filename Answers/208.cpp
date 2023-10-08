class Trie {
private:
    array<Trie*, 26> children;
    bool endOfWord = false;

public: 
    void insert(string word) {
    
        Trie* curr = this;

        for(auto i : word){

            if(curr->children[i - 'a'] == nullptr) curr->children[i - 'a'] = new Trie();  
            curr = curr->children[i - 'a'];

        }

        curr->endOfWord = true;
    }
    
    bool search(string word) {
        
        Trie* curr = this;

        for(auto i : word){

            if(curr->children[i - 'a'] != nullptr){
                curr = curr->children[i - 'a']; 
            }
            else return false;

        }

        return curr->endOfWord;
    }
    
    bool startsWith(string prefix) {
        
        Trie* curr = this;

        for(auto i : prefix){

            if(curr->children[i - 'a'] != nullptr){
                curr = curr->children[i - 'a'];
            }
            else return false;
        }

        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */