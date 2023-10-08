class Solution {
public:
    bool isStrobogrammatic(string num) {
        unordered_map<char, char> checkNumber{
            {'0', '0'},
            {'1', '1'},
            {'8', '8'},
            {'6', '9'},
            {'9', '6'}
        };

        int n = num.size();
        int i = (n - 1)/2;
        int j = i + !(n % 2);

        while(i >= 0){

            if( checkNumber[num[i]] == 0 || checkNumber[num[i]] != num[j] ) return false;

            j++;
            i--;
        }
        return true;
    }
};