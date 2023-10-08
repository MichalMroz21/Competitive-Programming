class Solution {
public:
    int maxDepth(string s) {
        int depth{}, openCount{};

        for(auto ch : s){
            openCount += (ch == '(') - (ch == ')');
            depth = max(depth, openCount);
        }

        return depth;
    }
};