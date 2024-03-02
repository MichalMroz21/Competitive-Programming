class Solution {
public:

    vector<int> lastVisitedIntegers(vector<string>& words) {
        
        int numPtr{};

        bool consPrev{false};

        vector<int> ret{}, prevInts{};

        for(int i = 0; i < words.size(); i++){

            if(words[i] == "prev"){
                if(consPrev == false){
                    numPtr = prevInts.size() - 1;
                }
                else{
                    numPtr--;
                }
                if(numPtr < 0) ret.push_back(-1);
                else ret.push_back(prevInts[numPtr]);

                consPrev = true;
            }
            else {
                prevInts.push_back(stoi(words[i]));
                consPrev = false;
            }

        }

        return ret;
    }
};