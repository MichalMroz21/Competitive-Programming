class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i{}, n = abbr.size();

        bool wasDigitBefore = false;

        for(int j = 0; j < n; j++){

            char curr = abbr[j];

            if(i >= word.size() || curr == '0') return false;

            if(isdigit(curr)){

                if(wasDigitBefore) return false;
 
                int skip{};

                if(j != n - 1 && isdigit(abbr[j + 1])){
                    j++;
                    skip = stoi(string(1, curr) + string(1, abbr[j]));
                }

                else skip = stoi(string(1, curr));

                i += skip;
                wasDigitBefore = true;
            }

            else if(curr != word[i++]){
                return false;
            }

            else wasDigitBefore = false;
        }

        return i == word.size();
    }
};