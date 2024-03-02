class Solution {
public:
    string removeDuplicates(string s) {

        string str{};

        for(auto i : s){
            if(!str.empty() && str.back() == i) str.pop_back();
            else str.push_back(i);
        }

        return str;
    }
};