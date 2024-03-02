class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        unordered_map<char, int> groupLetters{};
        array<string, 3> keyboard = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

        vector<string> ret{};

        for(int i = 0; i<keyboard.size(); i++){

            for(auto j : keyboard[i]){

                groupLetters[j] = i;

            }

        }

        for(auto i : words){

            int a = groupLetters[tolower(i[0])];
            bool takeIt = true;

            for(int j = 1; j<i.size(); j++){

                if(groupLetters[tolower(i[j])] != a) takeIt = false;  

            }

            if(takeIt) ret.push_back(i);

        }

        return ret;

    }
};