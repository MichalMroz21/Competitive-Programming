class Solution {
public:
    string removeStars(string s) {
        
        string ret = "";

        for(auto& i : s){

            if(i != '*'){
                ret.push_back(i);
            }
            else{
                ret.pop_back();
            }

        }
        return ret;

    }
};