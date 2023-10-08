class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        int L = 0;
        int R = n - 1;

        while(L <= R){

            int m = (R - L)/2 + L;

            int numberOfPapersOnRight = n - m;
            //maximizing and minimizing number of papers on the right counting from middle element
            //number of right elements from middle will be returned
            //if mid is lower than number of elements that means it has to be minimized - we have to go to the right.
            //going to the left is pointless, since there are values that are lesser and we will make numOfRight higher.

            if(citations[m] == numberOfPapersOnRight) return numberOfPapersOnRight;
            if(citations[m] < numberOfPapersOnRight)  {
                L = m + 1;
            }
            else R = m - 1;

        }

        return n - L;
    }
};