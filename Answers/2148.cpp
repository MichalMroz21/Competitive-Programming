class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxElement = *max_element(nums.begin(), nums.end());
        int minElement = *min_element(nums.begin(), nums.end());

        int res{};

        for(auto i : nums) if(i != maxElement && i != minElement) res++;

        return res;
    }
};