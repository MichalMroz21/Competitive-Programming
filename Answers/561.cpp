class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        vector<int> countMap{};
        constexpr int antiNegative = 10000;

        for (auto i : nums) {

            int currIndex = i + antiNegative;

            if (static_cast<int>(countMap.size()) - 1 < currIndex) {
                int times = (currIndex - countMap.size() + 1);
                while (times) { countMap.push_back(0); times--; }
            
            }

            countMap[currIndex]++;
        }

        int sum{};
        bool flip = false;

        for(int i = countMap.size() - 1; i >= 0; i--){

           while(countMap[i] > 0){
               countMap[i]--;

               if(flip) sum += i - antiNegative;

               flip = !flip;
           }

        }

        return sum;

    }
};