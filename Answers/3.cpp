class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        
        auto p1 = s.begin();
        auto p2 = s.begin();

        int max_length{};
        unordered_map<char, bool> uniqueChars{};

        while(p1 != s.end()){

            char a = *p1;
            if(uniqueChars[a] != false){
                uniqueChars[*p2] = false;
                p2++;
            }

            else{
                uniqueChars[a] = true;
                p1++;
                int length = distance(p2, p1);
                if(length > max_length) max_length = length;
            }
        }

        return max_length;
    }
};
