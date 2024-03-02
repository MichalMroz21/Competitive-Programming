class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int L = 0;
        int R = letters.size() - 1;

        char ret{letters[0]};

        while(L <= R){

            int m = L + (R - L)/2;
            int k = letters[m];
            
            if(target < k){
                ret = k;
                R = m - 1;
            }

            else{
                L = m + 1;
            }

        }

        return ret;


    }
};