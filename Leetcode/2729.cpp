class Solution {
public:
    bool isFascinating(int n) {
        vector<int> nums{n, 2 * n, 3 * n};

        unordered_map<int, int> mp{};

        while(nums[0]){

            for(auto& i : nums){
                mp[i % 10]++;
                i /= 10;
            }
        }

        for(auto [key, value] : mp){
            if(value != 1 || key == 0) return false;
        }

        return true;
    }
};