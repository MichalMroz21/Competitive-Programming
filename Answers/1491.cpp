class Solution {
public:
    double average(vector<int>& salary) {
        
        int minN{numeric_limits<int>::max()};
        int maxN{numeric_limits<int>::min()};
        int n = salary.size();
        int sum{}, i;

        for(i = 1; i < n; i = i + 2){

            int a = salary[i];
            int b = salary[i - 1];
            sum += a + b;

            minN = min(minN, a < b ? a : b);
            maxN = max(maxN, a > b ? a : b);

        }

        if(i == n) {
            sum += salary[--i];
            minN = min(salary[i], minN);
            maxN = max(salary[i], maxN);
        }

        return (sum - minN - maxN)/static_cast<double>(n-2);

    }
};