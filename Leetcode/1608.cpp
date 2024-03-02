class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        int L = 1;
        int R = nums.size();

        while(L <= R){

            int m = L + (R - L)/2;

            int counter{};

            for(int i=0; i<nums.size(); i++){
                if(nums[i] >= m) counter++;
            }

            if(m == counter) return m;
            else if(counter < m) R = m - 1;
            else L = m + 1;

        }

        return -1;
    }
};