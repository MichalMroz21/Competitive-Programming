class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](auto& a, auto& b){return a[1] > b[1];});

        int answer{};

        for(auto i : boxTypes){
            if(truckSize == 0) break;

            if(i[0] <= truckSize) {
                truckSize -= i[0];
                answer += i[1] * i[0];
            }
            else if(i[0] > truckSize){
                answer += truckSize * i[1];
                truckSize = 0;
            }
        }

        return answer;
    }
};