class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ret{};
        for(auto i : nums){

            int n{};

            while(i != 0){
                n++;
                i /= 10;
            }

            if(!(n % 2)) ret++;

        }

        return ret;

    }
};