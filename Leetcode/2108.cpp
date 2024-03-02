class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto& str : words){

            int i{}, j = str.size() - 1;

            bool isPalindromic{true};

            while(i < j)
                if(str[i++] != str[j--]) isPalindromic = false;
            

            if(isPalindromic) return str;

        }

        return "";
    }
};