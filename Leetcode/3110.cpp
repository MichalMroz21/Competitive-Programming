class Solution {
public:
    int scoreOfString(string s) {

        int score{};

        for(int i = 1; i < s.size(); i++){
            score += abs(s[i - 1] - s[i]);
        }

        return score;
    }
};