class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        
        vector<int> cntArr(32);

        bitset<32> ans{};

        for(int i : nums){
            int ind{};

            while(i){
                cntArr[ind] += (i & 1);
                if(cntArr[ind] == k) ans[ind] = 1;
                i >>= 1;
                ind++;
            }
        }

        return (int)(ans.to_ulong());
    }
};