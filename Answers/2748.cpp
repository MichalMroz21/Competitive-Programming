class Solution {
public:

    int getFirstNumber(int n){
        while(n > 9){
            n /= 10;
        }
        return n;
    }

    int countBeautifulPairs(vector<int>& nums) {
        
        unordered_map<int, int> firstHistory{};

        int ans{};

        for(auto& i : nums){

            for(auto& [key, value] : firstHistory){
                if(__gcd(key, i % 10) == 1) ans += value;
            }

            firstHistory[getFirstNumber(i)]++;
        }

        return ans;
    }
};