class Solution {
public:
    string multiply(string num1, string num2) {
        
        int n = num1.size(), m = num2.size();

        if(n > m) {
            swap(num1, num2);
            swap(n, m);
        }

        string res{};

        vector<int> resVec(m + n, 0);

        int k = resVec.size() - 1, carry{};

        for(int i = n - 1; i >= 0; i--){

            int resIndex = k;

            for(int j = m - 1; j >= 0; j--){

                int mul = ((num1[i] - '0') * (num2[j] - '0'));

                resVec[resIndex--] += mul % 10 + carry;
                carry = mul / 10;

            }

            resVec[resIndex] += carry;
            carry = 0;

            k--;
        }

        for(int i = resVec.size() - 1; i >= 0; i--){
            resVec[i] += carry;
            carry = resVec[i] / 10;
            resVec[i] %= 10;
            resVec[i] += '0';
        }

        int consZeroIndex{};

        for(auto i : resVec){
            if(i != '0') break;
            consZeroIndex++;
        }

        if(consZeroIndex == resVec.size()) consZeroIndex--;

        for(auto i : resVec){
            res += i;
        }

        return string(res.begin() + consZeroIndex, res.end());
    }
};