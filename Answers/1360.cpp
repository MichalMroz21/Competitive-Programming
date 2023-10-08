class Solution {
public:
    int daysBetweenDates(string date1, string date2) {     
        return abs(dateToDays(date1) - dateToDays(date2));    
    }

protected:
    unordered_map<int, int> monthMap{
        {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31},
        {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31},
        {11, 30}, {12, 31}
    };

    int dateToDays(string& date){
        int year{ stoi(date.substr(0, 4)) }, 
            month{ stoi(date.substr(5, 2)) },
            day{ stoi(date.substr(8, 2)) },
            dateDays{};

        for(int i = 1; i < year; i++)
            dateDays += 365 + isLeapYear(i);
        
        for(int i = 1; i < month; i++){
            dateDays += monthMap[i] + (i == 2 && isLeapYear(year));
        }

        dateDays += day;

        return dateDays;
    }

    bool isLeapYear(int year){
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
};