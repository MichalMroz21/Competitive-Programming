class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        
        vector<string> splitted{};

        for(string& word : words){

            int start{};

            for(int i = 0; i < word.size(); i++){

                if(word[i] == separator || i == word.size() - 1){

                    string str = word.substr(start, i - start + ( (i == word.size() - 1) && (word[i] != separator) ) );

                    if(!str.empty() && str[0] != separator) {
                        splitted.push_back(str); 
                    }

                    start = i + 1;
                }

            }

        }

        return splitted;
    }
};