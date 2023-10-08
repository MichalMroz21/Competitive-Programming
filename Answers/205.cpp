class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> mapCharactersS{};
        unordered_map<char, char> mapCharactersT{};

        for(int i = 0; i < s.size(); i++){

            if(mapCharactersS[s[i]] != 0){

                if(t[i] != mapCharactersS[s[i]]) return false;

            }

            else mapCharactersS[s[i]] = t[i];

            if(mapCharactersT[t[i]] != 0){

                if(s[i] != mapCharactersT[t[i]]) return false;

            }

            else mapCharactersT[t[i]] = s[i];

        }

        return true;
    }
};