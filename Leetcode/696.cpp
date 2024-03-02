class Solution {
public:
    int countBinarySubstrings(string s) {
        
        vector<int> counts(2);

        int prev{-1}, ans{};

        for(const auto& i : s){

            int curr = i - '0';

            if(curr != -1 && curr != prev){
                ans += min(counts[0], counts[1]);
                counts[!prev] = 0;
            }

            counts[curr]++;
            prev = curr;
        }

        ans += min(counts[0], counts[1]);

        return ans;
    }
};