class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<vector<int>> res{};

        unordered_map<int, int> countMap{};

        for(const int& i : nums){

            int row = countMap[i];

            if(row == res.size()) res.push_back({});

            res[row].push_back(i);

            countMap[i]++;
        }

        return res;

    }
};