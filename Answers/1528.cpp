class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string ret{};
        ret.resize(indices.size());


        for(int i=0; i<indices.size(); i++){

            ret[indices[i]] = s[i];

        }

        return ret;
    }
};