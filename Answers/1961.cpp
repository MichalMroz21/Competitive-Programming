class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        int sIndex{}, n = s.size();

        for(auto& word : words){

            for(auto& i : word){

                if(s[sIndex] != i) return false;

                sIndex++;
            }

            if(sIndex == n) return true;
        }

        return sIndex == n;
    }
};