class Solution {
public:

    int highestCommonDivisor(int a, int b){

        if(a == b) return a;
        if(a > b) return highestCommonDivisor(a - b, b);
        else return highestCommonDivisor(a, b - a);

    }

    int commonFactors(int a, int b) {
        
        int hcd = gcd(a, b), answer{}; //c++ has this in built-in library

        for(int i = 1; i <= hcd; i++){
            if(hcd % i == 0) answer++;
        }

        return answer;
    }
};