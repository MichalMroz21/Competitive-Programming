class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        
        int i1 = -1;
        int i2 = -1;
        
        int minDist = numeric_limits<int>::max();

        for(int i = 0; i<wordsDict.size(); i++){

            string curr = wordsDict[i];
            if(curr == word1) i1 = i;
            if(curr == word2) i2 = i;

            if(i1 != -1 && i2 != -1) minDist = min(minDist, abs(i1 - i2));

        }

        return minDist;
    }
};