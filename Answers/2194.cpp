class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans{};

        for(int c = s[0]; c <= s[3]; c++){
            for(int r = s[1]; r <= s[4]; r++){
                string temp{};
                temp += c;
                temp += r;
                ans.push_back(temp);
            }
        }

        return ans;
    }
};