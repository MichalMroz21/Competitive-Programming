class Solution {
public:
    int minOperations(int n) {
        int l{}, m{}, a1{}, an{};

        l = n / 2;
        a1 = 2 * (l + (n % 2)) + 1;
        an = 2 * (n - 1) + 1;

        if(n % 2) m = 2 * l + 1;
        else m = (2 * l + 1 + 2 * (l - 1) + 1)/2;

        return (a1 + an) / 2.0 * l - (m * l);
    }
};