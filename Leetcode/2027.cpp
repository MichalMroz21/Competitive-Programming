class Solution {
public:
    int minimumMoves(string s) {
        //XOX
        //XXXOXXX
        //XXOXX

        int ans{}, n = s.size();

        for(int i = 0; i < n; i++){

            if(s[i] == 'X'){
                ans++;
                i += 2;
            }
            
        }

        return ans;
    }
};