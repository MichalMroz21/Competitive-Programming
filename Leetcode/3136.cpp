class Solution {
public:
    unordered_map<char, bool> vowelMap{
        {'a', true}, {'e', true},
        {'i', true}, {'o', true},
        {'u', true}
    };

    bool isValid(string word) {
        uint8_t hasVowCons{};

        for(auto i : word) {
            if(!isalnum(i)) return false;
            i = tolower(i);
            hasVowCons |= vowelMap[i] + 2 * (!vowelMap[i] && isalpha(i));
        }

        return hasVowCons == 3 && word.size() >= 3;
    }
};
