class Solution {
public:

    bool isSelfDividing(int number){

        int temp = number;

        while(number){

          if(number % 10 == 0 || temp % (number % 10) != 0) return false;
          number /= 10;

        }

        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> ans{};

        for(int i = left; i <= right; i++){
            if(isSelfDividing(i)) ans.push_back(i);
        }

        return ans;
    }
};