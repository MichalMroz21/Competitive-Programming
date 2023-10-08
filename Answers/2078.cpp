class Solution {
public:
    int maxDistance(vector<int>& colors) {

        int i = 0, j = n - 1;

        if(colors[i] == colors[j]){
            
            int iCopy = i, jCopy = j;

            while(iCopy <= jCopy){ //find closest house with different color

                if(colors[iCopy] != colors[i]){
                    i = iCopy;
                    break;
                }
                if(colors[jCopy] != colors[j]){
                    j = jCopy;
                    break;
                }

                if(iCopy == jCopy) return 0; //if all houses have same color

                iCopy++;
                jCopy--;
            }

        }

        return j - i;
    }                  
};