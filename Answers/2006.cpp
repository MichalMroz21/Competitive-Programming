class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {

        unordered_map<int, int> countMap{};

        for(auto i : nums) countMap[i]++;

        int answer{};

        for(auto i : nums){
            countMap[i]--;
            answer += countMap[i - k] + countMap[i + k];
        }
        
        return answer;

    }
};