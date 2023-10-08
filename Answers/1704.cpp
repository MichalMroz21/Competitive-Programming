class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int i{}, n = s.size(), j{n - 1};

        int leftVowelCount{};
        int rightVowelCount{};

        unordered_map<char, bool> vowelCheck{
            {'a', true}, {'e', true}, {'i', true},
            {'o', true}, {'u', true}
        };

        while(i < j){

            if(vowelCheck[tolower(s[i])]) leftVowelCount++;
            if(vowelCheck[tolower(s[j])])
            rightVowelCount++;

            i++;
            j--;
        }

        return leftVowelCount == rightVowelCount;

    }
};