class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        int currDir = 0;
        unordered_map<int, int> dirMap{{0, 0}, {1, 0}, {2, 0}, {3, 0}};

        for(int i = 0; i < 4; i++){

            for(auto i : instructions){
                if(i == 'G') dirMap[currDir]++;
                else if(i == 'L') currDir--;
                else currDir++;

                if(currDir < 0) currDir = 3;
                else if(currDir == 4) currDir = 0;
            }
        }

        return dirMap[0] == dirMap[2] && dirMap[1] == dirMap[3];
    }
};