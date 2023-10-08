class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> wasBefore{};

        int sum{};

        for(auto i : nums){
            if(wasBefore[i] == 0) sum += i;
            if(wasBefore[i] == 1) sum -= i;
            wasBefore[i]++;
        }

        return sum;
    }
};