class Solution {
public:
    string removeTrailingZeros(string num) {
        
        int end = num.size() - 1;

        while(num[end] == '0') end--;

        return string(num.begin(), num.begin() + end + 1);

    }
};