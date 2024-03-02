class Solution {
public:

    string convertToString(bitset<10> combination){

        bitset<4> hours{};
        bitset<6> minutes{};

        for(int i = 0; i < 4; i++) hours[i] = combination[i + 6];
        for(int i = 0; i < 6; i++) minutes[i] = combination[i];

        unsigned long hoursI = hours.to_ulong();
        unsigned long minutesI = minutes.to_ulong();

        if(minutesI >= 60) return "";
        if(hoursI > 11) return "";

        string ret{":"};
        ret.insert(0, to_string(hoursI));
        ret.insert(ret.find(":") + 1, minutesI <= 9 ? "0" + to_string(minutesI) : to_string(minutesI));
        return ret;

    }

    void readBinaryWatchBacktrack(int turnedOn, vector<string>& ans, bitset<10> combination, int i){

        if(turnedOn == 0){

            string hour = convertToString(combination);
            if(hour != ""){
                ans.push_back(hour);
            }
            return;
        }

        while(i < 10){

            combination.set(i);
            readBinaryWatchBacktrack(turnedOn - 1, ans, combination, i + 1);
            combination.reset(i);
            i++;
        }

        return;
    }

    vector<string> readBinaryWatch(int turnedOn) {
        
        vector<string> ans{};
        readBinaryWatchBacktrack(turnedOn, ans, bitset<10>{}, 0);

        return ans;

    }
};