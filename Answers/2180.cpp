class Solution {
public:
    int countEven(int num) {
        int cnt{};

        for(int i = 1; i <= num; i++){

            int temp = i, sum{};

            while(temp){
                sum += temp % 10; 
                temp /= 10;
            }

            cnt += !(sum % 2);
        }

        return cnt;
    }
};