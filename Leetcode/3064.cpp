/** 
 * Definition of commonSetBits API.
 * int commonSetBits(int num);
 */

class Solution {
public:
    int findNumber() {

        int mask1 = INT_MAX, mask2 = 1,
            diff = commonSetBits(mask1);

        bitset<sizeof(int) * CHAR_BIT> ans{};

        for(int i = 0; i < sizeof(int) * CHAR_BIT; i++){

            mask1 ^= mask2;
            mask2 <<= 1;

            if(commonSetBits(mask1) < diff){
                ans[i] = 1;
            }

            mask1 = INT_MAX;
        }

        return ans.to_ulong();
    }
};