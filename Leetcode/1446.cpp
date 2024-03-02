class Solution {
public:
    int maxPower(string s) {
        
        int n = s.size(), power{}, maxPower{};

        if(n == 0) return power;

        char prev{s[0]};

        for(const char& ch : s){
            if(ch != prev) power = 0;
            prev = ch;
            power++;
            maxPower = max(maxPower, power);
        }

        return maxPower;
    }
};