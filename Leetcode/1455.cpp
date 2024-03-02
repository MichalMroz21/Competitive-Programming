class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        stringstream ss(sentence);

        int m = searchWord.size(), wordCount{1};

        string word{};

        while(ss >> word){

            if(m <= word.size()){

                bool isPrefix{true};

                for(int i = 0; i < m; i++){
                    if(word[i] != searchWord[i]) 
                        isPrefix = false;
                }

                if(isPrefix) 
                    return wordCount;
            }

            wordCount++;
        }

        return -1;
    }
};