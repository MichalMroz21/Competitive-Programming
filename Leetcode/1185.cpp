class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        
        auto is_leap = [](int year) { return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0); };
        
        int monthDay{}, yearDay{};

        unordered_map<int, int> monthMap{{1, 31}, {2, 28 + is_leap(year)}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};

        unordered_map<int, string> dayOfTheWeek{{0, "Sunday"}, {1, "Monday"}, {2, "Tuesday"}, {3, "Wednesday"}, {4, "Thursday"}, {5, "Friday"}, {6, "Saturday"}};

        while(--month != 0) monthDay += monthMap[month];
        
        while(--year != 1970) yearDay += 365 + is_leap(year);

        int days = yearDay + day + monthDay + 4;

        return dayOfTheWeek[days % 7];
    }
};