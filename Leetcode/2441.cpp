class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int> wasBefore{};

        int maxN = -1;

        for(auto i : nums){
            if(i < 0){
                if(wasBefore[-i] == 1) maxN = max(maxN, -i);
                wasBefore[-i] = 2;
            }
            else{
                if(wasBefore[i] == 2) maxN = max(maxN, i);
                wasBefore[i] = 1;
            }
        }

        return maxN;
    }
};