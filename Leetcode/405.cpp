class Solution {
public:
    string toHex(int num) {
        
        string ret{};
        bool negativeFlag{false};

        if(num < 0) negativeFlag = true;
        if(num == 0) return {"0"};

        int mask{0x0FFFFFFF};

        while(num != 0){

            int a{}, j{1};

            for(int i{}; i <= 3; ++i){
                a += (num & 1) * j;
                num >>= 1;
                j <<= 1;
            }

            if(negativeFlag) num &= mask;

            if(a >= 10){
                ret.insert(ret.begin(), a - 10 + 'a');
            }
            else ret.insert(ret.begin(), a + '0');

        }


        return ret;
    }
};