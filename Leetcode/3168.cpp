class Solution {
public:
    int minimumChairs(string s) {
        int ans{}, cnt{};

        for(const auto& i : s){
            cnt += (i == 'E' ? 1 : -1);
            ans = max(cnt, ans);
        }

        return ans;
    }
};