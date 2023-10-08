class Solution {
public:

    bool containsZero(int num){

        while(num){
            if(num % 10 == 0) return true;
            num /= 10;
        }

        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        
        for(int i = 1; i < n; i++){
            if(containsZero(i) == false && containsZero(n - i) == false) return {i, n - i};
        }

        return {-1, -1};
    }
};