class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string> ans{};

        unordered_map<char, int> prev{};

        for(string& word : words){

            unordered_map<char, int> curr{};

            for(auto& i : word){
                curr[i]++;
                prev[i]--;
            }

            bool areAnagrams = true;

            for(auto& [key, value] : prev){
                if(value != 0) areAnagrams = false;
            }
        
            if(areAnagrams == false) ans.push_back(word);

            prev = curr;
        }

        return ans;
    }
};