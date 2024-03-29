class Solution {
public:
    int minimumPushes(string word) {
        
        int n = word.size();

        return 4 * (n / 8) * (1 + n / 8) + (n % 8) * (n / 8 + 1); 
    }
};