class Solution {
public:
    int countAsterisks(string s) {
        
        int verticalBarCounter{};
        int asteriskCounter{};

        for(auto& i : s){

            if(i == '|'){
                verticalBarCounter++;
                continue;
            }

            if(!(verticalBarCounter % 2)){
                if(i == '*') asteriskCounter++;
            }

        }

        return asteriskCounter;

    }
};