class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int res{};

        for(auto i : operations){

            res += i[0] == '+' || i[2] == '+' ? 1 : -1;

        }

        return res;
    }
};