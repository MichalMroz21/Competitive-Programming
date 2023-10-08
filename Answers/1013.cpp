class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.begin(), arr.end(), 0);

        if(sum % 3) return false;

        int partSum = sum / 3, currSum{}, cnt{};

        for(auto i : arr){
            currSum += i;
            if(currSum == partSum) {currSum = 0; cnt++;}
        }

        return cnt >= 3;
    }
};