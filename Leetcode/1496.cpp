class Solution {
public:
    bool isPathCrossing(string path) {
        
        map<vector<int>, bool> wasBefore{};
        
        unordered_map<int, int> dirOper{{'S', -1}, {'W', -1}, {'N', 1}, {'E', 1}};

        vector<int> currCoord(2);
        
        for(char& direction : path){

            wasBefore[currCoord] = true;

            currCoord[direction == 'S' || direction == 'N'] += dirOper[direction];

            if(wasBefore[currCoord]) return true;
        }

        return false;
    }
};