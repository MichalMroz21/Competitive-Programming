class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        unordered_map<int, int> history{};

        int ans{};

        for(auto i : nums){

            if(history[k - i]){
                ans++;
                history[k - i]--;
            }

            else history[i]++;

        }

        return ans;

    }
};