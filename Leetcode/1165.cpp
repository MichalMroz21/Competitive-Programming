class Solution {
public:

    unordered_map<char, int> keyMap{};

    int calculateTime(string keyboard, string word) {
        
        for(int i = 0; i < keyboard.size(); i++){
            keyMap[keyboard[i]] = i; 
        }

        int currPos{}, moveTime{};

        for(auto i : word){
            moveTime += abs(currPos - keyMap[i]);
            currPos = keyMap[i];
        }

        return moveTime;
    }
};