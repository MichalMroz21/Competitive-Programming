class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        unordered_map<char, int> mp{};

        int j{}, maxLen{};

        for(int i = 0; i < s.size(); i++){

            if(mp[s[i]] == 2){
                do{
                    mp[s[j]]--;
                }while(s[j++] != s[i]);
            }

            mp[s[i]]++;
            maxLen = max(i - j + 1, maxLen);
        }

        return maxLen;
    }
};