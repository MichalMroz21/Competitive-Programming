class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int> scoreSorted = score;
        sort(scoreSorted.begin(), scoreSorted.end(), std::greater<>());

        vector<string> resultArr{};
        int n = score.size();

        unordered_map<int, string> medalMap { {0, "Gold Medal"}, {1, "Silver Medal"}, {2, "Bronze Medal"} };

        for(int i = 0; i < n; i++){

            int m = upper_bound(scoreSorted.begin(), scoreSorted.end(), score[i],
                            [](int a, int b) { return a >= b; }) - scoreSorted.begin(); //binary searching index m on descending arr

            if(medalMap[m].empty()) resultArr.push_back(to_string(m + 1));
            else resultArr.push_back(medalMap[m]);

        }

        return resultArr;
    }
};