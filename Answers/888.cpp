class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        int diff = accumulate(bobSizes.begin(), bobSizes.end(), 0) 
        - accumulate(aliceSizes.begin(), aliceSizes.end(), 0);

        unordered_map<int, bool> isInAlice{};

        for(int i = 0; i < aliceSizes.size(); i++)
            isInAlice[aliceSizes[i]] = true; 
        
        for(int i = 0; i < bobSizes.size(); i++){  

            int aliceShare = bobSizes[i] - diff/2;
            if(isInAlice[aliceShare]) 
                return vector<int>{aliceShare, bobSizes[i]}; 
        }

        return vector<int>{-1, -1};
    }
};