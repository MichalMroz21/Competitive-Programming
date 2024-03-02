class Solution {
public:
    bool canPermutePalindrome(string s) {
        
        unordered_map<char, int> countMap{};

        int oddCount{};

        for(auto i : s) {
            countMap[i]++;

            if(countMap[i] % 2 == 0) oddCount--;
            else oddCount++;
        }
        
        return oddCount <= 1;
    }
};