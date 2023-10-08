class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int numPointer = num.size() - 1;
        vector<int> result{};
        int a{}, b{}, c{}, carry{};

        while(k != 0 || numPointer >= 0){

            if(numPointer < 0) b = 0;
            else b = num[numPointer--];

            a = k % 10;

            c = a + b + carry;

            carry = c >= 10;

            c = c % 10;
            result.push_back(c);

            k /= 10;
        }

        if(carry == 1) result.push_back(1);

        return vector<int>(result.rbegin(), result.rend());

    }
};