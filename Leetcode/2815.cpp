class Solution {
public:
    int maxSum(vector<int>& nums) {
        
        unordered_map<int, pair<int, int>> maxPairs{};

        for(auto i : nums){

            int maxDigit{}, currDigit{i};

            while(currDigit){
                maxDigit = max(maxDigit, currDigit % 10);
                currDigit /= 10;
            }

            pair<int, int> currPair = maxPairs[maxDigit];

            currPair.first = max(currPair.first, i);

            if(currPair.first > currPair.second) 
                swap(currPair.first, currPair.second);

            maxPairs[maxDigit] = currPair;
        }

        int answer{-1};

        for(auto [maxDigit, pair] : maxPairs){
            if(pair.first != 0 && pair.second != 0)
                answer = max(answer, pair.first + pair.second);
        }

        return answer;
    }
};