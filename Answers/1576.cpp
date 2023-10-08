class Solution {
public:

    void changeMark(string& s, int i, int n){
        char left = i > 0 ? s[i - 1] : 0,
             right = i + 1 < n ? s[i + 1] : 0;

        unordered_set<char> st{left, right};

        for(int ch = 'a'; ch <= 'z'; ch++){
            if(st.find(ch) == st.end()){
                s[i] = ch;
                return;
            }
        } 
    }

    string modifyString(string s) {
      
        int n = s.size();

        for(int i = 0; i < n; i++){
            if(s[i] == '?') changeMark(s, i, n);
        }

        return s;
    }
};