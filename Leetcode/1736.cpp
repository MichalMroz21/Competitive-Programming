class Solution {
public:
    string maximumTime(string time) {
        
        string hour = time.substr(0, 2),
               minutes = time.substr(3, 2);

        if(minutes[0] == '?') minutes[0] = '5';
        if(minutes[1] == '?') minutes[1] = '9';

        if(hour[0] == '?'){
            
            if(hour[1] == '?'){
                hour[1] = '3';
            }

            hour[0] = ('1' + (hour[1] <= '3') );        
        }

        if(hour[1] == '?') {
            if(hour[0] == '0' || hour[0] == '1') hour[1] = '9';
            if(hour[0] == '2') hour[1] = '3';
        }

        return hour + ':' + minutes;
    }
};