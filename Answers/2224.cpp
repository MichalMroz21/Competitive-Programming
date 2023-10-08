class Solution {
public:
    int convertTime(string current, string correct) {
        
        int curHour = std::stoi(current.substr(0, 2)), 
            corrHour = std::stoi(correct.substr(0, 2)),
            curMin = std::stoi(current.substr(3, 2)),
            corrMin = std::stoi(correct.substr(3, 2)),

            minDiff = corrMin - curMin,
            hourDiff = corrHour - curHour;

        if(hourDiff < 0) hourDiff += 24;

        if(minDiff < 0) {
            minDiff += 60;
            hourDiff--;
        }

        int minDiffAdd{};

        minDiffAdd += minDiff / 15;
        minDiff %= 15;

        minDiffAdd += minDiff / 5;
        minDiff %= 5;

        minDiffAdd += minDiff;

        return hourDiff + minDiffAdd;
    
    }
};