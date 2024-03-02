class Solution {
public:
    string reformatNumber(string number) {
        
        string ans{}, numbers{};

        for(auto i : number){
            if(isdigit(i)) numbers += i;
        }

        int n = numbers.size(), addedNumbers = n - 4;

        if(n <= 3) return numbers;

        string lastFour = numbers.substr(addedNumbers);

        for(int i = 0; i < n - 4; i++){

            ans += numbers[i];

            if( (i + 1) % 3 == 0) {
                ans += '-';
            }
        }

        if(addedNumbers % 3 == 1 || addedNumbers % 3 == 0){
            ans += lastFour.substr(0, 2) + '-' + lastFour.substr(2);
        }

        else{
            ans += lastFour.substr(0, 1) + '-' + lastFour.substr(1);
        }

        return ans;
    }
};