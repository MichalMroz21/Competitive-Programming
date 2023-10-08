class Solution {
public:
    bool checkZeroOnes(string s) {

        vector<int> lCont(2), curr(2);

        for(int i = 0; i < s.size(); i++){

            int n = s[i] - '0';

            curr[!n] = 0;

            lCont[n] = max(lCont[n], ++curr[n]);

        }

        return lCont[1] > lCont[0];
    }
};