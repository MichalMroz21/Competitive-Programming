class Solution {
public:
    string convertToBase7(int num) {
        
        string ret{};
        bool negativeFlag = false;

        if(num == 0) return "0";

        if(num < 0) {
            negativeFlag = true;
            num *= (-1);
        }

        while(num != 0){

            ret.insert(ret.begin(), num % 7 + '0');
            num /= 7;
        }

        if(negativeFlag){
            ret.insert(ret.begin(), '-');
        }

        return ret;
    }
};