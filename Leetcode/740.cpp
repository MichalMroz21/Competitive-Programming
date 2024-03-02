class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());

        set<int> withoutDuplicates{};
        unordered_map<int, int> countMap{};

        for(int i=0; i<n; i++){
            countMap[nums[i]]++;
            withoutDuplicates.insert(nums[i]);
        }

        auto end = withoutDuplicates.end();
        auto begin = withoutDuplicates.begin();
        auto it = begin;
        
        int N = withoutDuplicates.size();
        int res{};
        vector<int> dp(N, 0);

        int prev = *it;
        dp[0] = *it * countMap[*it++];
        if(N == 1) return dp[0];
        
        if(*it - prev == 1) dp[1] = max(dp[0], *it * countMap[*it]);
        else dp[1] = dp[0] + *it * countMap[*it];

        prev = *it;
        it++;

        int i = 2;

        while(it != end){

            int a = *it * countMap[*it];
            if(*it - prev == 1) dp[i] = max(dp[i-2] + a, dp[i - 1]);
            else dp[i] = dp[i - 1] + a;

            prev = *it;
            i++;
            it++;
        }

        return dp[N - 1];

    }
};