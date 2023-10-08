class Solution {
public:
    string oddString(vector<string>& words) {
        
        int n = words[0].size();

        vector<int> diffArr(n - 1);

        int selectedWord{}, different{};

        for(int i = 1; i < n; i++) 
            diffArr[i - 1] = words[0][i] - words[0][i - 1];

        for(int i = 1; i < words.size(); i++){

            for(int j = 1; j < n; j++){

                if(diffArr[j - 1] != words[i][j] - words[i][j - 1]){
                    selectedWord = i;
                    different++;
                    if(different == 2) return words[0];
                    break;
                }

            }

        }

        return words[selectedWord];
    }
};