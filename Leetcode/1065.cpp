class Trie{
public:

    vector<Trie*> children;
    bool endOfWord;

    Trie() : children(26), endOfWord(false) {}
    
    void putWord(const string& word){

        Trie* curr = this;

        for(const auto& i : word){
            if(curr->children[i - 'a'] == nullptr)
                curr->children[i - 'a'] = new Trie();
            
            curr = curr->children[i - 'a'];
        }

        curr->endOfWord = true;
    }
};


class Solution {
public:
    vector<vector<int>> indexPairs(string text, vector<string>& words) {
        
        vector<vector<int>> ans{};

        Trie* root = new Trie();

        for(const auto& word : words) 
            root->putWord(word);
        
        int n = text.size();

        for(int i = 0; i < n; i++){

            Trie* rootCopy = root;

            for(int j = i; j < n; j++){

                rootCopy = rootCopy->children[text[j] - 'a'];

                if(rootCopy == nullptr) break;
                if(rootCopy->endOfWord) ans.push_back({i, j});
            }   
        }

        return ans;
    }
};