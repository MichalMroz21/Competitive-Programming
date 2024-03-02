class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        int count{}, numsSum{};

        for(auto i : nums){

            if(i % 6 == 0) {
                count++;
                numsSum += i;
            }

        }

        return count != 0 ? numsSum / count : 0;

    }
};