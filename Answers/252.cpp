class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), [](vector<int>& interval1, vector<int>& interval2)
            {return interval1[0] < interval2[0];});

        int prevRight{-1};

        for(auto& interval : intervals){
            if(interval[0] < prevRight) return false;
            prevRight = interval[1];
        }   

        return true;
    }
};