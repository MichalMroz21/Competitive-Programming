class Solution {
public:
    string similarRGB(string color) {
        vector<string> pos{"00", "11", "22", "33", "44", "55", "66", "77", "88", "99", "aa", "bb", "cc", "dd", "ee", "ff"};

        string ans{"#"};

        for(int i = 1; i < color.size(); i += 2){

            string curr = string(1, color[i]) + string(1, color[i + 1]);

            string chosen{};
            int minDiff{INT_MAX};

            for(auto i : pos){
                int diff = abs(stoi(i, nullptr, 16) - stoi(curr, nullptr, 16));
                if(diff < minDiff){
                    chosen = i;
                    minDiff = diff;
                }
            }

            ans += chosen;
        }

        return ans;
    }
};