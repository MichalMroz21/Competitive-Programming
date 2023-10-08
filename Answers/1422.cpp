class Solution {
public:
    int maxScore(string s) {
        
        int right = count_if(s.begin(), s.end(), [](char a){return a == '1';}), 
        left{}, maximized{};

        for(int i = 0; i < s.size() - 1; i++){

            if(s[i] == '1') right--;
            else left++;

            maximized = max(maximized, left + right);
       
        }

        return maximized;
    }
};