class Solution {
public:

    bool isLeapYear(int year){
        return (year % 100 != 0 || year % 400 == 0) && year % 4 == 0;
    }

    int numberOfDays(int year, int month) {
        
        unordered_map<int, int> monthDays{{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};


        if(month == 2) return 28 + isLeapYear(year);
        else return monthDays[month];
    }
};