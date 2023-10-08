class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> curr;
        vector<int> prev(1, 1);

        for(int i=1; i <= rowIndex; i++){

            curr = vector<int>(i + 1, 1);

            for(int j = 1; j < i; j++){

                curr[j] = prev[j - 1] + prev[j];

            }

            prev = move(curr);

        }

        return prev;
        
    }
};