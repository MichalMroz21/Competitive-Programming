class Solution {
public:
    string sortSentence(string s) {
        
        int numberOfSpaces{}, beginIndex{};
        const int MAX_WORDS = 9, n = s.size();

        vector<string> listOfStrings(MAX_WORDS);

        s.push_back(' ');

        for(int i = 0; i < n + 1; i++){

            if(s[i] == ' '){
                listOfStrings[s[i - 1] - '0' - 1] = string(s.begin() + beginIndex, s.begin() + i - 1);
                beginIndex = i + 1;
            }

        }

        string answer{};

        for(auto& str : listOfStrings) if(!str.empty()) answer += str + ' ';

        answer.pop_back();

        return answer;
    }
};