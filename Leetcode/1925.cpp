0/5

class Solution {
public:
    int countTriples(int n) {

        int ans{};

        for(int i = 1; i <= n; i++){

            for(int j = i; j <= n; j++){

                double sqt = sqrt(i * i + j * j);

                if(sqt == (int)sqt && sqt <= n) ans += 2;
            }

        }

        return ans;
    }
};