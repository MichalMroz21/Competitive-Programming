class Solution {
public:

    pair<int, int> longestNiceSubstringDivide(string& s, int L, int R){

        unordered_map<char, bitset<2>> history{}; 

        for(int i = L; i <= R; i++)
            history[tolower(s[i])][isupper(s[i]) != 0] = 1;
        
        for(int i = L; i <= R; i++){
            if(history[tolower(s[i])].count() == 1){

                pair<int, int> pair1 = longestNiceSubstringDivide(s, L, i - 1),
                               pair2 = longestNiceSubstringDivide(s, i + 1, R);

                if(pair1.second - pair1.first >= pair2.second - pair2.first) return pair1;
                else return pair2;

            }
        }

        return {L, R};
    }

    string longestNiceSubstring(string s) {
        pair<int, int> range = longestNiceSubstringDivide(s, 0, s.size() - 1);

        return string(s.begin() + range.first, s.begin() + range.second + 1);
    }
};