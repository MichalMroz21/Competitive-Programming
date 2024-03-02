class Solution {
public:
    int pivotInteger(int n) {  
        double result = sqrt((n * n + n)/2.0);
        return result == (int)result ? result : -1;
    }
};