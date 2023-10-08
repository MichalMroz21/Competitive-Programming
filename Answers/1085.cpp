class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end()),
        sm{};

        while(mn){
            sm += mn % 10;
            mn /= 10;
        }

        return sm & 1 == 1 ? 0 : 1;
    }
};