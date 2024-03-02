class Solution {
public:
    int countTime(string time) {
        int ans{1};

        if(time[3] == '?') ans *= 6;
        if(time[4] == '?') ans *= 10;

        if(time[0] == '?' && time[1] == '?') ans *= 24;
        else if(time[0] == '?'){
            ans *= (2 + (time[1] < '4') );
        }
        else if(time[1] == '?'){
            ans *= (10 - (time[0] == '2' ? 6 : 0));
        }

        return ans;
    }
};