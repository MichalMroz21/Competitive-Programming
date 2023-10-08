class Solution {
public:
    int sumBase(int n, int k) {
        
        int answer{};

        while(n){
            answer += n % k;
            n /= k; 
        }
        
        return answer;
    }
};