class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        if(strs.empty()) return 0;

        int ans{};

        for(int j = 0; j < strs[0].size(); j++){

            bool isSorted = true;

            for(int i = 1; i < strs.size(); i++){

                if(strs[i][j] < strs[i - 1][j]) isSorted = false;

            }

            ans += !isSorted;

        }
        return ans;
    }

    
};