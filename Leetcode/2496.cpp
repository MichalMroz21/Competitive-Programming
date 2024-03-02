class Solution {
public:
    int maximumValue(vector<string>& strs) {
        
        int maxVal{};

        for(auto& str : strs){

            int currVal{};

            for(auto& ch : str){

                if(!isdigit(ch)){             
                    currVal = str.size();
                    break;
                }

                currVal *= 10;
                currVal += (ch - '0');
            }

            maxVal = max(maxVal, currVal);

        }

        return maxVal;

    }
};