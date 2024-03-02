class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        int maxSquares{}, maxLen{};

        for(auto& rectangle : rectangles){

            int rectangleLength = min(rectangle[0], rectangle[1]);

            if(rectangleLength > maxLen){
                maxSquares = 1;
                maxLen = rectangleLength;
            }
            else if(rectangleLength == maxLen){
                maxSquares++;
            }
        }

        return maxSquares;
    }
};