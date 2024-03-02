class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        string str = to_string(num);

        int i = 0, j = k - 1, ans{};

        while(j < str.size()){

            int subNum{};

            for(int m = i; m <= j; m++){
                subNum *= 10;
                subNum += str[m] - '0';
            }

            ans += ( (subNum != 0) && (num % subNum == 0) );

            i++;
            j++;
        }

        return ans;

    }
};