class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int, int> freqMap{};
        
        int result{-1}, freq{};

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] % 2) continue;

            freqMap[nums[i]]++;

            if(freqMap[nums[i]] == freq){
                result = min(result, nums[i]);
            }

            if(freqMap[nums[i]] > freq){
                result = nums[i];
                freq = freqMap[nums[i]];
            }

        }

        return result;
    }
};