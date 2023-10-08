class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int answer{};

        unordered_map<char, bool> isVowel{
            {'a', true}, {'e', true}, {'i', true}, {'o', true}, {'u', true}
        };

        for(int i = left; i <= right; i++){
            if(isVowel[words[i].back()] && isVowel[words[i].front()]) answer++;
        }

        return answer;
    }
};