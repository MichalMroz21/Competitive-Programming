class Solution {
public:
    string thousandSeparator(int n) {

        if(n == 0) return "0";
        
        int i{};

        string ans{};

        while(n){

            if(i != 0 && i % 3 == 0) ans += '.';

            ans += (n % 10 + '0');
      
            i++;

            n /= 10;
        }

        return string(ans.rbegin(), ans.rend());
    }
};