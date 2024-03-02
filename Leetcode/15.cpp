class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
       
        sort(nums.begin(), nums.end());

        if(nums.size() < 3) return {};
        if(nums[0] > 0) return {};

        auto p1 = nums.begin();
        auto begin = nums.begin();
        auto end = nums.end();

        vector<vector<int>> result{};
        unordered_map<int, int> storeThird{};

        for(int i=0; i<nums.size(); i++){
            storeThird[nums[i]] = i;
        }

        while(p1 < end - 2){

            int a = *p1;
            if(a > 0) {p1++; continue;}

            auto p2 = p1 + 1;
            
            while(p2 < end - 1){

                int b = *p2;
                int c = (-1)*(a + b);

                if(storeThird.count(c) && distance(p2, begin + storeThird[c]) > 0){
                    result.push_back(vector<int>{a,b,c});
                }

                p2 = begin + storeThird[b]; 
                p2++;
            }

            p1 = begin + storeThird[a];
            p1++;
        }

        return result;
    }
};
