class Solution {
public:

    unordered_map<int, int> monthMap{
        {1, 31}, {2, 28}, {3, 31}, {4, 30}, 
        {5, 31}, {6, 30}, {7, 31}, {8, 31}, 
        {9, 30}, {10, 31}, {11, 30}, {12, 31}
    };

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        vector<int> days(4);
        vector<string> dates{arriveAlice, leaveAlice, arriveBob, leaveBob};

        int i{};

        for(auto& date : dates){
            int monthSum{};

            for(int i = 1; i < stoi(date.substr(0, 2)); i++){
                monthSum += monthMap[i];
            }

            days[i++] = monthSum + stoi(date.substr(3));
        }

        int diff = min(days[1], days[3]) - max(days[0], days[2]);

        if(diff < 0) return 0;
        
        return diff + 1;
    }
};