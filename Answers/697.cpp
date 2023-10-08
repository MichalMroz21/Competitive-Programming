class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        int degree{};
        
        size_t n{nums.size()};

        unordered_map<int, int> countMap{}, leftMap{}, distMap{};

        for(size_t i{}; i < n; i++){ 

            int curr{nums[i]};
            countMap[curr]++;

            degree = max(degree, countMap[curr]);

            if(countMap[curr] == 1) leftMap[curr] = i;
            else distMap[curr] = i - leftMap[curr] + 1;
             
        }

        int shortestLength{numeric_limits<int>::max()};

        for(auto& [key, value] : countMap){

            if (value == degree){
                shortestLength = min(shortestLength, distMap[key] == 0 ? 1 : distMap[key]);
            }

        }

        return shortestLength;

    }
};