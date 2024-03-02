class Solution {
public:
    string makeFancyString(string s) {
        
        string str{};

        char prev{};
        int cnt{};

        for(const auto& i : s){

            if(prev != i){
                cnt = 0;
            }

            if(!(cnt >= 2)) str += i;   
            
            prev = i;
            cnt++;
        }

        return str;
    }
};