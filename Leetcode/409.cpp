class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char, int> letterCount{};
        for(auto i : s) letterCount[i]++;
        
        int result{};
        bool isOne = false;

        for(auto [key, value] : letterCount){

            if(!(value % 2)) result += value;

            else{
                result += value - 1; 
                isOne = true;
            }
            
        }

        return result + isOne;
    }
};