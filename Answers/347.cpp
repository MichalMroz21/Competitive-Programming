class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int, int> countMap{};

        for(auto i : nums){

            countMap[i]++;

        }

        vector<int> result{};
        vector<vector<int>> buckets(n + 1, vector<int>{});

        for(auto [key, value] : countMap){
            buckets[value].push_back(key);
        }

        for(int i = buckets.size() - 1; i >= 0; i--){

            for(auto j : buckets[i]){

                result.push_back(j);
                k--;
                if(k == 0) return result;

            }
        }

        return result;

    }
};