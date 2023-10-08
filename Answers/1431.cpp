class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxCandy = *max_element(candies.begin(), candies.end());
        
        vector<bool> result{};

        for(int& candy : candies){

            bool currResult{false};

            if(candy + extraCandies >= maxCandy) currResult = true;

            result.push_back(currResult);

        }

        return result;

    }
};