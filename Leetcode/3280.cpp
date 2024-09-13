class Solution {
public:
    string convertDateToBinary(string date) {
        bitset<16> a(std::stoi(date.substr(0, 4))), b(std::stoi(date.substr(5, 2))), c(std::stoi(date.substr(8, 2)));

        std::string binLeading = a.to_string() + '-' + b.to_string() + '-' + c.to_string(), ans{};

        bool oneMet = false;

        for(const auto& i : binLeading){
            if(i == '-'){
                oneMet = false;
                ans += i;
            }
            else if(oneMet){
                ans += i;
            }
            else if(i == '1') {
                oneMet = true;
                ans += i;
            }
        }

        return ans;
    }
};