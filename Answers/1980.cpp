class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();
        string ans(n, '0');
        
        unordered_set<int> binSet{};

        for(auto& bin : nums){
            binSet.insert(bitset<16>(bin).to_ulong());
        }

        for(int i = 0; i <= n; i++){
            if(binSet.find(i) == binSet.end()){
                while(i){
                    ans[--n] = ('0' + (i & 1));
                    i /= 2;
                }
                return ans;
            }
        }

        return ans;
    }   
};