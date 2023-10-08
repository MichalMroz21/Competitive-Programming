class Solution {
public:
    int reverse(int x) { 
        
        int max = std::numeric_limits<int>::max();
        int min = std::numeric_limits<int>::min();
        int result{};

        while(x != 0){

            int a = x % 10;

            if( result > max/10 || result < min/10 ){ 
                return 0;
            }

            result *= 10;

            if(a >= 0) {
                if(result > max-a) return 0;
            }
            
            else if(result < min-a) return 0;
            
            result += a;
            x /= 10;
        }

        return result;
    }
};
