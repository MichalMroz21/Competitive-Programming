class Solution {
public:
    bool isUgly(int n) {

        if(n == 0) return false;
        array<int, 3> divisors = {2, 3, 5};
        bool divided = false;

        while(n != 1){

            for(auto i : divisors){ 

                if(!(n % i)) {
                    n /= i; 
                    divided = true; 
                    break;
                }
                
            }


            if(divided == false) return false;
            divided = false;
        }

        return true;

    }
};