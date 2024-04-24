class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans{};
        int curr = 1;

        for(auto i : target){
            while(curr < i){
                ans.push_back("Push");
                ans.push_back("Pop");
                curr++;
            }
            ans.push_back("Push");
            curr++;
        }

        return ans;
    }
};