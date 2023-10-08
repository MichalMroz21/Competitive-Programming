class Solution {
public:
    int maxArea(vector<int>& height) {
        
        auto left = height.begin();
        auto right = height.end() - 1;
        int maxArea = {};
        int width = distance(left, right);

        while(width != 0){

            int a = *left;
            int b = *right;

            if(a < b) {maxArea = max(maxArea, a * width); left++;}
            else {maxArea = max(maxArea, b * width); right--;}

            width = distance(left, right);
        }

        return maxArea;
    }
};
