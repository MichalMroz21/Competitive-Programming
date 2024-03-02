class Solution {
public:

    inline int arithmetic_sum(int a1, int an, int n) { return (a1 + an) / 2.0 * n; }
    inline int last_elem(int a1, int r, int n) { return a1 + (n - 1) * r; } //this is an

    vector<int> distributeCandies(int candies, int num_people) {

        vector<int> ans(num_people);

        double delta = sqrt(1 + 8 * (long int)candies),
               x2 = (-1 + delta)/2.0;

        int n = floor(x2); 

        for(int i = 0; i < num_people; i++){

            int groupSize = n % num_people,
                sumN = n / num_people + (n % num_people > i);

            ans[i] = arithmetic_sum(i + 1, last_elem(i + 1, num_people, sumN), sumN);
        }

        ans[n % num_people] += candies - arithmetic_sum(1, n, n);
        return ans;
    }
};