class Solution {
public:
    bool areNumbersAscending(string s) {
        
        stringstream ss(s);

        string temp{};

        int prev{-1};

        while(ss >> temp){
            if(isdigit(temp[0])){

                int a = stoi(temp);

                if(prev != -1){
                    if(prev >= a) return false;
                }
                prev = a;
            } 
        }

        return true;
    }
};