class Solution {
public:
    string generateTheString(int n) {
        
        return string(n - !(n % 2), 'a') + string(!(n % 2), 'b');

    }
};