class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> countMap(*max_element(heights.begin(), heights.end()) + 1);

        for(auto i : heights) countMap[i]++;

        int i = 0, n = heights.size(), indices{};

        for(int j = 0; j < countMap.size(); j++){

            if(i == n) break; 

            while(countMap[j] != 0 && i != n){

                if(j != heights[i]) indices++;

                i++;
                countMap[j]--;
            }

        }

        return indices;
    }
};