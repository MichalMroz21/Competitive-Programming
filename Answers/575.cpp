class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int n = candyType.size();

        unordered_map<int, bool> candies{};

        for(auto& i : candyType){
            candies[i] = true;
        }

        return min(static_cast<int>(candies.size()), n / 2);
    }
};