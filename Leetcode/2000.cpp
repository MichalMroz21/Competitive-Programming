class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int i = 0;
        for(int j = 0; j < word.size(); j++){
            if(word[j] == ch){
                while(i < j){
                    swap(word[i++], word[j--]);
                }
                break;
            }
        }

        return word;

    }
};