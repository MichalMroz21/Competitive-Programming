class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp{};

        int maxSize{}, maxNumber{};

        for(int i = 1; i <= n; i++){

            int iCopy = i, digitSum{};

            while(iCopy){
                digitSum += iCopy % 10;
                iCopy /= 10;
            }

            mp[digitSum]++;

            if(mp[digitSum] > maxSize){
                maxSize = mp[digitSum];
                maxNumber = 1;
            }
            else if(mp[digitSum] == maxSize){
                maxNumber++;
            }
        }

        return maxNumber;
    }
};