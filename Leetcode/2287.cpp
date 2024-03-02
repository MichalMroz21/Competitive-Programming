class Solution {
public:
    int rearrangeCharacters(string s, string target) {

        unordered_map<char, int> cntMap{};

        for(auto i : s) cntMap[i]++;

        int ans{INT_MAX};

        unordered_map<char, int> cntMapTarget{};

        for(auto i : target) cntMapTarget[i]++;

        for(auto [key, value] : cntMapTarget){

            ans = min(ans, cntMap[key] / value);

        }

        return ans;
    }
};