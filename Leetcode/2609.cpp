class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {

        s.push_back('0');
        
        int prev{-1}, maxLength{}, zeroCnt{}, oneCnt{}, n = s.size();

        for(int i = 0; i < n; i++){

            if(prev == '1' && s[i] == '0'){

                maxLength = max(maxLength, min(2 * zeroCnt, 2 * oneCnt));
                            
                oneCnt = 0;
                zeroCnt = 0;
            }

            if(s[i] == '0') zeroCnt++;
            else oneCnt++;

            prev = s[i];
        }

        return maxLength;
    }
};