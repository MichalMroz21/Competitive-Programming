class Solution {
public:
string longestPalindrome(string s) {
    int n = s.size();
    if (n < 2) return s;

    vector<vector<int>>dp(n, vector<int>(n, false));
    unordered_map<char, vector<int>> char_pos{};

    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    int start{0}, len{1};

    for (int i = 0; i < n; i++) {

        char c = s[i];

        for (int j : char_pos[c]) {

            if (i - j == 1 || dp[j + 1][i - 1]) {
                dp[j][i] = true;
                int curLen = i - j + 1;
                if(curLen > len){
                    len = curLen;
                    start = j;
                }
            }

        }

        char_pos[c].push_back(i);

    }
    return string(s.begin() + start, s.begin() + start + len);
}

};
