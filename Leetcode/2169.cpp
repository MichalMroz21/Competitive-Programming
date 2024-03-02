class Solution {
public:
    int countOperations(int num1, int num2) {
        int count{};

        while(num2 != 0){

            //important to do modulo instead of subtraction.
            //example: num1 = 1000, num2 = 1. You won't have to subtract
            //1000 times... it's always just one operation.

            count += num1 / num2;
            num1 %= num2;
            swap(num1, num2);

        }

        return count;
    }
};