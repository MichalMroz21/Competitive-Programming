class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int numberOfOnes = count_if(s.begin(), s.end(), [](char a){return a == '1';}),
            n = s.size();

        return string(numberOfOnes - 1, '1') + string(n - numberOfOnes, '0') + string(numberOfOnes > 0, '1');


    }
};