class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> res{0};

        int end = res.size(), j{};

        for(int i = 1; i <= n; i++){
            
            res.push_back(res[j++] + 1);

            if(j == end){
                j = 0;
                end = res.size();
            }
        }
        
        return res;
    }
};