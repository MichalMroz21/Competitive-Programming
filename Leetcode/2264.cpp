class Solution {
public:
    string largestGoodInteger(string num) {
        
        const int WINDOW_SIZE = 3, n = num.size();
        int maxNum = -1;

        for(int i = 0; i < n - WINDOW_SIZE + 1; i++){

            if(num[i] < maxNum + '0') continue;

            int j = i, windowSizeCopy = WINDOW_SIZE, prev{num[j]};

            bool isUnique = true;

            while(windowSizeCopy--){

                if(prev != num[j]){
                    isUnique = false;
                    break;
                }

                prev = num[j];
                j++;
            }

            if(isUnique) {
                maxNum = num[i] - '0';
            }
        }

        return maxNum == -1 ? "" : string(WINDOW_SIZE, maxNum + '0');
    }
};