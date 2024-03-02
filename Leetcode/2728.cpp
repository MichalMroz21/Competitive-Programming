/**
 * Definition for a street.
 * class Street {
 * public:
 *     Street(vector<int> doors);
 *     void openDoor();
 *     void closeDoor();
 *     bool isDoorOpen();
 *     void moveRight();
 *     void moveLeft();
 * };
 */
class Solution {
public:
    int houseCount(Street* street, int k) {
        Street* copy = street;
        while(k--){
            copy->closeDoor();
            copy->moveRight();
        }

        int ans{};

        while(!street->isDoorOpen()){
            ans++;
            street->openDoor();
            street->moveRight();
        }

        return ans;
    }
};