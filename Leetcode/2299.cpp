class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        
        bool lower{}, upper{}, digit{}, special{};

        string specialChars = "!@#$%^&*()-+";

        char prev{};

        int n = password.size();

        for(int i = 0; i < n; i++){

            char curr = password[i];

            if(prev != 0 && curr == prev){
                return false;
            }

            if(isdigit(curr)) digit = true;
            if(isupper(curr)) upper = true;
            if(islower(curr)) lower = true;
            if(specialChars.find(curr) != -1) special = true;

            prev = curr;
        }

        return lower && upper && digit && special && n >= 8;
    }
};