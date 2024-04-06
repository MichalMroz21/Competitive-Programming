class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int prev{}, ans{};

        for(auto& row : bank){

            int curr{};
            
            for_each(row.begin(), row.end(), 
                [&curr](char a){
                    curr += a - '0';
                }
            );

            if(curr == 0) continue;

            if(prev){
                ans += prev * curr;
            }

            prev = curr;
        }

        return ans;
    }
};