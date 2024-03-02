class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        
        int L{}, R{}, n = s.size();

        vector<vector<int>> ans{};

        while(R < n){

            char a = s[L];

            while(R < n && s[++R] == a){}

            if(R - L >= 3) ans.push_back({L, R - 1});

            L = R;
        }

        return ans;
    }
};