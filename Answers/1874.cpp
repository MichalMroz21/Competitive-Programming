class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {

        int n = 101, m = 101;

        vector<int> cnt1(n), cnt2(m);

        for(int i = 0; i < nums1.size(); i++){
            cnt1[nums1[i]]++;
            cnt2[nums2[i]]++;
        }

        int ans{}, i{}, j = m - 1;

        while(true){

            while(i != n && cnt1[i] == 0) i++;
            while(j >= 0 && cnt2[j] == 0) j--;

            if(i == n) break;

            ans += i * j;

            cnt1[i]--;
            cnt2[j]--;
        }    

        return ans;
    }
};