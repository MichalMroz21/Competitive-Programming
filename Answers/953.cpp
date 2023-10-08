class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        int m = order.size();
        int n = words.size();

        unordered_map<char, int> alphabetMap{};

        for(int i=0; i<m; i++) alphabetMap[order[i]] = i;

        for(int i=0; i<n - 1; i++){

            int j{};
            int size1 = words[i].size();
            int size2 = words[i + 1].size();

            while(j < size1 && j < size2){

                if(alphabetMap[words[i][j]] < alphabetMap[words[i+1][j]]) break; 
                if(alphabetMap[words[i][j]] > alphabetMap[words[i+1][j]]) return false;
                j++;
            }
            if(j==size2 && j<size1) return false; 
        }

        return true;

    }
};