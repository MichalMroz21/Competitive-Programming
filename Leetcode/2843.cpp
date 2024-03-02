class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int ans{};

        for(int i = low; i <= high; i++){

            int num = i, 
                amountOfNumbers = static_cast<int>( log10(num) + 1 ),
                equalSum{};

            if(amountOfNumbers % 2 == 0){

                amountOfNumbers /= 2;

                while(num){

                    if(amountOfNumbers <= 0){
                        equalSum -= (num % 10);
                    }
                    else equalSum += (num % 10);

                    num /= 10;
                    amountOfNumbers--;
                }

                if (equalSum == 0) ans++;
            }

        }

        return ans;
    }
};