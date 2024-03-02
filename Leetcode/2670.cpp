class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 1) return {1};

        vector<int> distinctLeft(n, 0), distinctRight(n, 0), answer(n, 0);

        unordered_map<int, bool> wasBefore{};

        int distinctCount{};

        for(int i = n - 1; i >= 0; i--){
            distinctRight[i] = distinctCount;
            if(wasBefore[nums[i]] == false){
                distinctCount++;
            }        
            wasBefore[nums[i]] = true;
        }

        wasBefore = {};
        distinctCount = 0;

        for(int i = 0; i < n; i++){
            distinctLeft[i] = distinctCount;
            if(wasBefore[nums[i]] == false){
                distinctCount++;
            }
            if(i != n - 1) wasBefore[nums[i]] = true;
        }

        for(int i = 0; i < n; i++){
            if(i != n - 1) answer[i] =  distinctLeft[i + 1] - distinctRight[i];              
            else answer[i] = (distinctLeft[i] + (wasBefore[nums[i]] == false)) - distinctRight[i];
        }

        return answer;
    }
};