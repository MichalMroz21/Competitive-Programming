class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        
        int sum{};

        for(auto i : nums){
            int toAdd{}, maxDigit{}, cnt{};

            while(i){
                maxDigit = max(maxDigit, i % 10);
                i /= 10;
                cnt++;
            }

            while(cnt){
                toAdd *= 10;
                toAdd += maxDigit;
                cnt--;
            }

            sum += toAdd;
        }

        return sum;
    }
};