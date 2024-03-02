class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int i = 0,
            j = i + k - 1,
            whiteCount{},
            ans{INT_MAX};

        for(int l = i; l <= j; l++) 
            if(blocks[l] == 'W') 
                whiteCount++;

        while(j < blocks.size()){

            ans = min(ans, whiteCount);

            if(blocks[i] == 'W') whiteCount--;

            i++;
            j++;

            if(blocks[j] == 'W') whiteCount++;
        }

        return ans;
    }
};