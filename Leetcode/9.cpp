class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) return false;

        int temp1 = x;
        long long temp2{};

        while(x != 0){
            temp2 *= 10;
            temp2 += x % 10;
            x /= 10; 
        }

        return temp2 == temp1;
    }
};
