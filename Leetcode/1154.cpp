class Solution {
public:

    int dayOfYear(string date) {

        unordered_map<int, int> monthMap{
            {1, 31}, {2, 28}, {3, 31}, {4, 30},
            {5, 31}, {6, 30}, {7, 31}, {8, 31},
            {9, 30}, {10, 31}, {11, 30}, {12, 31}
        };
        
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        bool isLeap = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

        bool addOne = month > 2 && isLeap;

        int result = addOne;

        for(int m = 1; m < month; m++) result += monthMap[m];

        return result + day;
    }   
};