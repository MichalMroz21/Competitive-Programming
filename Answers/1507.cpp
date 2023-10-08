class Solution {
public:
    string reformatDate(string date) {

        unordered_map<string, string> monthMap{
            {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"},
            {"Apr", "04"}, {"May", "05"}, {"Jun", "06"},
            {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"},
            {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
        };
        
        stringstream ss(date);

        string year, month, day;

        ss >> day >> month >> year;

        string dayRet = day.substr(0, day.find_last_of("0123456789") + 1);

        if(dayRet.size() == 1) dayRet.insert(dayRet.begin(), '0');

        return year + '-' + monthMap[month] + '-' + dayRet;
    }
};