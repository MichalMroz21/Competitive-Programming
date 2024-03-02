class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        unordered_map<int, int> yearMap{};

        int maxPop{}, maxYear{};

        for(vector<int>& log : logs){
            for(int i = log[0]; i < log[1]; i++) {
                yearMap[i]++;
                if(maxPop == yearMap[i] && i < maxYear) maxYear = i;
                if(yearMap[i] > maxPop){
                    maxPop = yearMap[i];
                    maxYear = i;
                }
            }
                
        }

        return maxYear;
    }
};