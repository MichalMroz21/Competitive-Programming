class Solution {
public:
    int balancedStringSplit(string s) {
        
        stack<char> st{};

        unordered_map<char, char>mp {{'L', 'R'}, {'R', 'L'}};

        int res{};

        for(auto i : s){

            if(!st.empty() && mp[i] == st.top()){

                st.pop();
                if(st.empty()) res++;

            }

            else st.push(i);

        }

        return res;

    }
};