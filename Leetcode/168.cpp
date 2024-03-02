class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans{};

        while(columnNumber--){

            ans += columnNumber % 26 + 'A';
            columnNumber /= 26;
        }

        return string(ans.rbegin(), ans.rend());
    }
};