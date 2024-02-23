class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int, int> mp{};

        int maxFreq{}, distCnt{};

        for(auto i : nums){
            mp[i]++;

            if(mp[i] == maxFreq){
                distCnt++;
            }
            else if(mp[i] > maxFreq){
                distCnt = 1;
                maxFreq = mp[i];
            }
        }

        return distCnt * maxFreq;
    }
};