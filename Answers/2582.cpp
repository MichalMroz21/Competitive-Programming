class Solution {
public:
    int passThePillow(int n, int time) {

        int side = (time / (n - 1)) % 2,
            rem = time % (n - 1);

        return side == 0 ? rem + 1 : n - rem;
    }
};