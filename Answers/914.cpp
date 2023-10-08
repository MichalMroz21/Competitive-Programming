class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        unordered_map<int, int> freqMap{};

        int GCD{};

        for(auto i : deck)
            freqMap[i]++;
        

        for(auto [key, value] : freqMap)
            GCD = gcd(value, GCD);
        

        return GCD != 1;
    }
};