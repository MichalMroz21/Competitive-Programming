class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int displacement = 0;

        vector<int>result{};
        result.reserve(digits.size() + 1);

        int i = digits.size() - 1;

        while(i >= 0){

            int k = digits[i];
            int sum = k + 1;

            if(sum >= 10) {
                result.insert(result.begin(), 0);
                displacement = 1;
            }

            else{
                result.insert(result.begin(), sum);
                displacement = 0;
                while(--i >= 0){
                    int a = digits[i];
                    result.insert(result.begin(), a);
                }
            }

            i--;
        }     


        if(displacement == 1){
            result.insert(result.begin(), 1);
        }

        return result;

    }
};