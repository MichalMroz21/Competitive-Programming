class Solution {
public:

    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        int i = 0;
        int j = n - 1;

        k %= n;

        while(i != n){

            j = n - 1;

            k %= (j - i + 1);
            j -= k - 1;
            
            if(i >= j || k == 0) return;
            
            while(j != n) swap(nums[i++], nums[j++]);
            
        }
    }
};