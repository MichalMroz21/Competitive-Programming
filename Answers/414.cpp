class Solution {
public:
    int thirdMax(vector<int>& nums) {

        if(nums.size() <= 2) return *max_element(nums.begin(), nums.end());

        vector<int> INT_MIN_marks(3, 0), threeMax(3, INT_MIN);

        int countDifferent{};

        for(auto i : nums){
            for(int j = 0; j < 3; j++){
                
                if(threeMax[j] <= i) {

                    if(i == INT_MIN && threeMax[j] == INT_MIN){
                        INT_MIN_marks[j] = 1; break;
                    }
                    
                    if(threeMax[j] == i) break;

                    for(int k = 2 - j; k >= 0; k--){
                        if(k == 0) threeMax[j] = i;
                        else threeMax[j + k] = threeMax[j + k - 1];
                    }

                    countDifferent++;
                    break;                    
                }
            }  
        }

        return countDifferent + accumulate(INT_MIN_marks.begin(), INT_MIN_marks.end(), 0) >= 3 ? threeMax[2] : threeMax[0];
    }
};