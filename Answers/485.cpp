class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxN{};
        int currN{};

        for(auto i : nums){

            if(i) currN++;
            else {
                maxN = max(currN, maxN);
                currN = 0;   
            }

        }
        
        maxN = max(currN, maxN);
        return maxN;
    }
};