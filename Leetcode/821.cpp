class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        vector<int>  positions{};

        for(int i = 0; i < s.size(); i++) if(s[i] == c) positions.push_back(i);

        int j = 1;

        int first = positions[0];
        int second{};

        if(positions.size() == 1){
            second = positions[0];
            j = 0;
        }
        else second = positions[1];

        vector<int> res{};

        for(int i = 0; i<s.size(); i++){

            int a = abs(first - i);
            int b = abs(second - i);

            if(a <= b) {

                res.push_back(a);

            }

            else{

                res.push_back(b);

                if(j + 1 != positions.size()){
                    first = positions[j];
                    second = positions[j + 1];
                    j++;
                }
            }

        }
        return res;
    }
};