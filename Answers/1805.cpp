class Solution {
public:
    int numDifferentIntegers(string word) {
        
        unordered_set<string> st{};

        string digit{};

        for(auto i : word){

            if(isdigit(i)){
                if(!digit.empty() && digit[0] == '0') digit[0] = i;
                else digit += i;
            }
            else{
                if(!digit.empty()) st.insert(digit);
                digit = {};
            }

        }

        if(!digit.empty()) st.insert(digit);

        return st.size();
    }
};