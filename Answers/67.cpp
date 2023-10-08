class Solution {
public:
    string addBinary(string a, string b) {
        
        auto p1 = a.rbegin();
        auto p2 = b.rbegin();

        string ans{};

        int carry{};

        while(p1 != a.rend() || p2 != b.rend()){
            char C1{}, C2{};

            if(p1 == a.rend()) C1 = '0';
            else {C1 = *p1; p1++;}

            if(p2 == b.rend()) C2 = '0';
            else {C2 = *p2; p2++;}

            int c = (C1 - '0') + (C2 - '0') + carry;
            carry = 0;
            if(c == 2 || c == 3) {c -= 2; carry = 1;};
            ans.push_back(c + '0');
        }

        if(carry == 1) ans.push_back('1');
        return(string(ans.rbegin(), ans.rend()));

    }
};