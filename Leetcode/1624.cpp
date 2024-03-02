class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        unordered_map<char, int> posMap{};

        int largest{-1};

        for(int i = 0; i < s.size(); i++){

            if(posMap[s[i]] == 0){
                posMap[s[i]] = i + 1;
            }

            largest = max(i - posMap[s[i]], largest);
            
        }

        return largest;
    }
};