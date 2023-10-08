class Solution {
public:

    bool checkRotation(string s, string goal, int rotation){

        for(int i = 0; i < goal.size(); i++){
            if(goal[i] != s[(i + rotation) % goal.size()]) return false;
        }

        return true;
    }

    bool rotateString(string s, string goal) {
        
        if(s.size() != goal.size()) return false;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == goal[0] && checkRotation(s, goal, i)){
                return true;
            }

        }

        return false;
    }
};