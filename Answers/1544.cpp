class Solution {
public:
    string makeGood(string s) {
        stack<char> st{};
        string str{};

        for(auto i : s) {
            
            if(!st.empty() && st.top() != i && (tolower(i) == tolower(st.top()))) 
                st.pop(); 

            else st.push(i);
        }

        while(!st.empty()){
            str += st.top();
            st.pop();
        }

        reverse(str.begin(), str.end());
        return str;
    }
};