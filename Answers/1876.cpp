class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int ans{};

        for(int i = 2; i < s.size(); i++){

            unordered_map<char, int> freqMap{};
            
            bool isGood = true;

            for(int j = i; j > i - 3; j--){
                if(freqMap[s[j]] == 1) isGood = false;
                freqMap[s[j]] = 1;
            }

            ans += isGood;

        }

        return ans;
    }
};