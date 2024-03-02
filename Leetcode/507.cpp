class Solution {
public:
    bool checkPerfectNumber(int num) {
        
      int count{1};

      if(num == 1) return false;

      for(int i = 2; i <= sqrt(num); i++){
          if(num % i == 0){
            count += i;
            if(num / i != i) count += num / i;
          }
      }

      return count == num;
    }
};