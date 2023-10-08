class Solution {
public:
    string reverseWords(string s) {
        
        int i = 0;
        int j = 0;
        int n = s.size();

        while(i != n){

            if(j == n - 1 || s[j] == ' '){

                int saveJ = j;
                if(j != n - 1) j--;
                while(i < j) swap(s[i++], s[j--]);

                i = saveJ + 1;
                j = saveJ; 

            }

            j++;
        }

        return s;
    }
};