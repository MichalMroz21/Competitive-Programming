class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        if(s1.size() != s2.size()) return false;

        unordered_map<int, int> cntMap1{}, cntMap2{};

        for(int i = 0; i < s1.size(); i++){
            if(i % 2){
                cntMap1[s1[i]]++;
                cntMap1[s2[i]]--;
            }
            else{
                cntMap2[s1[i]]++;
                cntMap2[s2[i]]--;
            }
        }

        for(auto [key, value] : cntMap1) if(value != 0) return false;
        for(auto [key, value] : cntMap2) if(value != 0) return false;

        return true;
    }
};