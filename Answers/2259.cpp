class Solution {
public:
    string removeDigit(string number, char digit) {

        for(int i = 0; i < number.size(); i++){

            if(number[i] == digit && number[i + 1] > digit){
                return number.substr(0, i) + number.substr(i + 1);
            }
        }

        return number.substr(0, number.rfind(digit)) + number.substr(number.rfind(digit) + 1);
    }
};
