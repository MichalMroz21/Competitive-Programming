class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        int n = firstWord.size(), m = secondWord.size(), o = targetWord.size();
        int i = n - 1, j = m - 1, k = o - 1;

        int leftover{};

        while(i >= 0 || j >= 0){
            int a{}, b{}, c{}, d{};

            if(i >= 0) a = firstWord[i--] - 'a';
            if(j >= 0) b = secondWord[j--] - 'a';

            c = a + b + leftover;
            leftover = c / 10;
            c = c % 10;

            if(k >= 0) d = targetWord[k--] - 'a';
            if(d != c) return false;
        }

        if(leftover >= 1){
            if(k >= 0 && targetWord[k] == 'b') return true;
            else return false;
        }
        
        return true;
    }
};