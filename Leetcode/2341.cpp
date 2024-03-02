class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        unordered_map<int, int> freqMap{};
        int removeCount{};

        for(auto i : nums){

            if(freqMap[i] == 1){
                freqMap[i] = 0;
                removeCount++;
            }
            else{
                freqMap[i]++;
            }

        }

        vector<int> a {removeCount, (int)nums.size() - removeCount * 2};
        return a;
    }
};