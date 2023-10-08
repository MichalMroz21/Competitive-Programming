class Solution {
public:
    vector<int> sumZero(int n) {
        
        int startInteger = n / 2;
        vector<int> answer{};

        while(n > 0){

            if(startInteger == 0) answer.push_back(0);

            else{
                answer.push_back(-startInteger);
                answer.push_back(startInteger);
            }

            n -= 2;
            startInteger--;
        }

        return answer;
    }
};