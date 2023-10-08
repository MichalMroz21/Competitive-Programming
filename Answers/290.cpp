class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string> history1{};
        unordered_map<string, char> history2{};

        string currStr{};

        int i{};
        int j{};

        int n = pattern.size();
        int m = s.size();

        while(i < n || j < m){

            if(i == n) return false;
            if(j == m && i + 1 != n) return false;
            
            if(j == m || s[j] == ' '){

                if(history1[pattern[i]].empty()){
                    history1[pattern[i]] = currStr;
                }

                if(history2[currStr] == 0){
                    history2[currStr] = pattern[i];
                }

                if(history1[pattern[i]] != currStr || history2[currStr] != pattern[i]){
                    return false;
                }

                i++;
                j++;
                currStr.clear();
            }

            else{
                currStr += s[j];
                j++;
            }


        }

        return true;
    }
};