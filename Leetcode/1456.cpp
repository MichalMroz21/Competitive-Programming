class Solution {
public:
    int maxVowels(string s, int k) {
        
        unordered_map<char, bool> isVowel{{'a', true}, {'e', true}, {'i', true}, {'o', true}, {'u', true}};

        int currVowels{}, maxVowels{};

        int i = 0, j = i + k - 1;

        int n = s.size();

        currVowels = count_if(s.begin() + i, s.begin() + j + 1, [&isVowel](char a){return isVowel[a]; });
        maxVowels = max(maxVowels, currVowels);

        while(true){

           currVowels -= isVowel[s[i]];

           i++;     
           j++;

           if(j >= n) break;        

           currVowels += isVowel[s[j]];

           maxVowels = max(maxVowels, currVowels);
        }

        return maxVowels;
    }
};