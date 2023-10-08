0/5

class Solution {

public:

    int findLHS(vector<int>& nums) {

        

        unordered_map<int, int> freqMap{};



        int ans{};



        for(auto i : nums){



            freqMap[i]++;



            if(freqMap[i - 1] != 0) 

                ans = max(ans, freqMap[i] + freqMap[i - 1]);

            if(freqMap[i + 1] != 0) 

                ans = max(ans, freqMap[i] + freqMap[i + 1]);

        }



        return ans;

    }

};