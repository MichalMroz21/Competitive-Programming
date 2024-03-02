class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int carry{}, i = num1.size() - 1, j = num2.size() - 1;

        string ans{};

        while(i >= 0 || j >= 0){

            int a = i >= 0 ? (num1[i] - '0') : 0,
                b = j >= 0 ? (num2[j] - '0') : 0,
                c = a + b + carry;

            carry = (c > 9);
            ans += to_string(c % 10);

            i--;
            j--;
        }

        if(carry) ans += "1";
        return string(ans.rbegin(), ans.rend());
    }
};