class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {

        constexpr int MAX_PIXELS = 100;
        int line{1}, currPixels{}, i{}, n = s.size();

        while(i < n){

            if(currPixels + widths[s[i] - 'a'] > MAX_PIXELS){
                currPixels = 0;
                line++;
            }

            else{
                currPixels += widths[s[i] - 'a'];
                i++;
            }

        }

        return {line, currPixels};
    }
};