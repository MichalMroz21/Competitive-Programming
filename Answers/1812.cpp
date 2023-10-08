class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        int letterNumber = coordinates[0] - 'a';
        int otherCoordinate = coordinates[1] - '0';

        return ((letterNumber + otherCoordinate - 1) % 2);

    }
};