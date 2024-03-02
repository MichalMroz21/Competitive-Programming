class Solution {
public:
    unordered_map<char, int> def{{'a', -1}, {'e', -1}, {'i', -1}, {'o', -1}, {'u', -1}}, last{def};

    int countVowelSubstrings(string word) {
        
        int n = word.size(), ans{}, seqBegin{-1};

        for(int i = 0; i < n; i++){

            if(def.find(word[i]) == def.end()) {
                seqBegin = -1;
                last = def;
                continue;
            }

            last[word[i]] = i;

            if(seqBegin == -1) seqBegin = i;

            int minInd = (*min_element(begin(last), end(last), [](auto& l, auto& r) {return l.second < r.second;})).second;             
            
            if(seqBegin != -1 && minInd != -1) ans += (minInd - seqBegin + 1);
            
        }

        return ans;
    }
};