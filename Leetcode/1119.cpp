class Solution {
public:

    unordered_map<char, bool> isVowel{
        {'a', true}, {'e', true}, {'i', true}, {'o', true}, {'u', true}
    };

    string removeVowels(string s) {
        string ret{};

        for(auto& i : s) if(!isVowel[i]) ret += i;

        return ret;    
    }
};