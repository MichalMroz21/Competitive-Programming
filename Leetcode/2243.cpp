class Solution {
public:
    string digitSum(string s, int k) {

        while(s.size() > k){

            string newString{};

            for(int i = 0; i < s.size(); i += k){

                int sz = (s.size() - i > k ? k : s.size() - i);

                newString += to_string(accumulate(s.begin() + i, s.begin() + i + sz, -'0' * sz));
            }

            s = newString;
        }

        return s;
    }
};