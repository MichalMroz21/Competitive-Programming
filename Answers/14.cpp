class Solution {
public:

    string constructCommonPrefix(string str1, string str2){
        auto str1P = str1.begin();
        auto str2P = str2.begin();

        string ret = "";

        while(*str1P != '\0' && *str2P != '\0'){
            if(*str1P != *str2P) break;

            ret.push_back(*str1P);
            str1P++;
            str2P++;
        }

        return ret;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) return strs[0];

        string ret = strs[0];

        for(int i=1; i<strs.size(); i++){
            ret = constructCommonPrefix(ret, strs[i]);
        }

        return ret;
    }
};
