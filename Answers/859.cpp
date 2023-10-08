class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        int n = s.size(), m = goal.size();

        if(n != m) return false;

        int cnt{};

        pair<char, char> swapChars = {0, 0};

        for(int i = 0; i < n; i++){

            if(s[i] != goal[i]){
                
                if(cnt == 2) return false;

                else if(swapChars == pair<char, char>{0, 0}){
                    swapChars = {s[i], goal[i]};
                }

                else if(swapChars.first != goal[i] || swapChars.second != s[i]) return false;

                cnt++;
            }
        }

        if(cnt == 0){

            unordered_map<char, bool> wasBefore{}; //O(1) anyway, max 26 chars

            for(auto i : s){
                if(wasBefore[i]) return true;
                wasBefore[i] = true;
            }

            return false;
        }

        return cnt == 2;
    }
};