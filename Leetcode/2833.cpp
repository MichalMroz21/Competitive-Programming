class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        int numOf_{}, dist{};

        for(auto i : moves){
            if(i == '_') numOf_++;
            else if(i == 'L') dist--;
            else dist++;
        }

        if(dist > 0) return dist + numOf_;
        else return abs(dist - numOf_);

    }
};