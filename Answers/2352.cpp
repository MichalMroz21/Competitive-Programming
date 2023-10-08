class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        unordered_map<string, int> mp{};

        for(int i = 0; i < grid.size(); i++){

            string s{};

            for(int j = 0; j < grid[i].size(); j++){

                s += to_string(grid[i][j]) + ','; 

            }

            s.pop_back();
            mp[s]++;

        }

        int answer{};

        for(int i = 0; i < grid[0].size(); i++){

            string s{};

            for(int j = 0; j < grid.size(); j++){

                s += to_string(grid[j][i]) + ',';

            }

            s.pop_back();
            answer += mp[s];
        }

        return answer;

    }
};