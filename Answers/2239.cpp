class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int ansMin{INT_MAX}, ans{};

        for(auto i : nums){

            if(abs(i) <= ansMin) {

                if(abs(i) == ansMin){

                    if(i > ans) ans = i; 

                }
                else ans = i;
                
                ansMin = abs(i);
            }

        }

        return ans;

    }
};