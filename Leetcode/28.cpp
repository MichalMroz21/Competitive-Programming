class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.size();
        int m = needle.size();

        int i = 0;
        int j = i + m - 1;

        while(j < n){

            if(haystack[i] == needle[0] && haystack[j] == needle[m - 1]){

                int firstNeedleCharacter = i + 1;
                int returnIndex = i;
                while(i < j){

                    i++;
                    if(firstNeedleCharacter - 1 != returnIndex && haystack[i] == needle[0]) firstNeedleCharacter = i; 
                    if(needle[m - (j - i + 1)] != haystack[i]) break;

                }

                if(i == j) return returnIndex;
                i = firstNeedleCharacter;
                j = i + m - 1;
                continue;
            }


            i++;
            j++;
        }

        return -1;

    }
};