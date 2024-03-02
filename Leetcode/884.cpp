class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string, int> wasBefore{};

        stringstream ss(s1 + " " + s2);
        string str{};

        while(ss >> str) wasBefore[str]++;

        vector<string> ans{};

        for(auto& [key, value] : wasBefore){
            if(value == 1) ans.push_back(key);
        }

        return ans; 

    }
};