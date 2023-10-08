class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int count{};
        
        for(const auto& i : items){

            if((i[0] == ruleValue && ruleKey == "type") || (i[1] == ruleValue && ruleKey == "color") || (i[2] == ruleValue && ruleKey == "name")) count++;

        }

        return count;
    }
};