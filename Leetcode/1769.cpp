class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n = boxes.size(), sm{}, totalOnes{}, prevOnes{};

        for(int i = 0; i < n; i++) {
            if(boxes[i] == '1') {
                sm += i;
                totalOnes++;
            }
        }

        vector<int> ans(n);
        boxes += '0';

        for(int i = 0; i < n; i++){

            ans[i] = sm;

            prevOnes += (boxes[i] == '1');

            sm -= (totalOnes - (prevOnes + (boxes[i + 1] == '1')));

            sm -= (boxes[i + 1] == '1');
            sm += prevOnes;
        } 

        return ans;
    }
};