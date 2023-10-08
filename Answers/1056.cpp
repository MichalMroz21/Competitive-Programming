class Solution {
public:
    bool confusingNumber(int n) {
        
        unordered_map<int, int> invertMap = {{0, 0}, {1, 1}, {6, 9}, {8, 8}, {9, 6}};

        int rotatedNumber{}, nCopy = n;

        while(nCopy){

            int a = nCopy % 10;
            if(invertMap.find(a) == invertMap.end()) return false;

            rotatedNumber *= 10;
            rotatedNumber += invertMap[a];

            nCopy /= 10;
        }

        return rotatedNumber != n;
    }
};