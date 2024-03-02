class Solution {
public:
    unordered_map<int, char> mp{{0, 'O'}, {1, 'I'}, {10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}};

    string toHexspeak(string num) {

        string ret{};
        long long numInt = stoll(num);

        while(numInt){

            if( numInt % 16 >= 2 && numInt % 16 <= 9 ) return "ERROR";

            ret += mp[numInt % 16];
            numInt /= 16;
        }

        return string(ret.rbegin(), ret.rend());
    }
};