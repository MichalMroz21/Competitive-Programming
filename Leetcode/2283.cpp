class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char, int> freqMap{};

        for(auto i : num) freqMap[i]++;

        for(int i = 0; i < num.size(); i++){

            if(freqMap[i + '0'] != num[i] - '0') return false;

        }

        return true;
    }
};