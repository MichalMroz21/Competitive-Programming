class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> romanSymbols{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ret{};

        if(s.size() == 1) return romanSymbols[s[0]];

        auto p1 = s.begin();
        auto p2 = s.begin() + 1;

        while(*p1 != '\0'){
            
            if(*p2 != '\0'){
                int a = romanSymbols[*p2] - romanSymbols[*p1];
                if(a > 0){
                    ret += a;
                    p1 += 2;
                    p2 += 2;
                    continue;
                }
            }

            ret += romanSymbols[*p1];
            p1++;
            p2++;
        }

        return ret;
    }
};
