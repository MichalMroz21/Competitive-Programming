class Solution {
public:

    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<vector<int>, int> countMap;

        int ans{};

        for(vector<int>& domino : dominoes){

            if(countMap[domino] == 0)
                swap(domino[0], domino[1]);
                 
            ans += countMap[domino];
            countMap[domino]++;
            
        }

        return ans;
    }
};