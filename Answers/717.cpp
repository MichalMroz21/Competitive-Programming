class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        bool isOneBit{};

        for(int i = 0; i < bits.size(); i++){
            if(bits[i] == 1) {isOneBit = false; i++;}
            else isOneBit = true;
        }

        return isOneBit;
    }
};