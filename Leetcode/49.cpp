class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> groupMap{};

        for(auto& str : strs){

            map<char, int>countMap{};

            for(char& ch : str){

                countMap[ch - 'a']++;

            }

            string groupKey{};

            for(auto& [key, value] : countMap){

                groupKey += key + to_string(value);

            }

            groupMap[groupKey].push_back(str);

        }

        vector<vector<string>> ret{};

        for(auto& [key, value] : groupMap){

            ret.push_back(value);

        }

        return ret;

    }
};