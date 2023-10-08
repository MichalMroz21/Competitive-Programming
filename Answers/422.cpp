class Solution {
public:

    int calcVertical(int k, vector<string>& words){

        int ret{};

        for(int i = k; i<words.size(); i++){
            if(words[i].size() > k) ret++;
        }

        return ret;
    }

    bool validWordSquare(vector<string>& words) {
        
        int k{};
        int n = words.size();

        while(k != n){

            int i = k;

            int horizontalSize = words[k].size() - k;
            if(horizontalSize < 0) horizontalSize = 0;
            int verticalSize = calcVertical(k, words);

            while(true){

                if(i - k == horizontalSize && i - k == verticalSize) break;
                if(i - k == horizontalSize) return false;
                if(i - k == verticalSize) return false;

                if(words[i][k] != words[k][i]) return false;
                i++;
            }
            
            k++;
        }

        return true;
    }
};