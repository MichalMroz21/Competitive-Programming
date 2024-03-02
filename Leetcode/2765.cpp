class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {

        int maxLength{-1}, currLength{-1}, n = nums.size();

        if(n == 2){
            return nums[1] - nums[0] == 1 ? 2 : -1;
        }

        for(int i = 2; i < n; i++){

            int first{nums[i - 2]}, second{nums[i - 1]}, third{nums[i]};

            if(first == third && second - first == 1){
                if(currLength != -1) currLength++;
                else currLength = 3;
            } 

            else if(currLength != -1 && first == third && second - first == -1){
                currLength++; 
            }

            else if(currLength == -1 && (second - first == 1 || third - second == 1) ){
                currLength = 2;
            }

            else{
                currLength = -1;
            }

            maxLength = max(maxLength, currLength);
        }

        return maxLength;
    }
};