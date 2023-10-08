class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
        int ans{};

        for(auto& pattern : patterns){
            ans += word.find(pattern) != string::npos;
        }

        return ans;
    }
};