class Solution {
public:


    int canTriangle(int a, int b, int c){

        if(a + b <= c) return 0;
        if(a + c <= b) return 0;
        if(b + c <= a) return 0;

        return a + b + c;
    }

    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int maxABC{};

        for(int i = 1; i<nums.size() - 1; i++){

            int ABC = canTriangle(nums[i - 1], nums[i], nums[i + 1]);
            if(ABC) maxABC = max(maxABC, ABC);

        }
        return maxABC;
    }
};