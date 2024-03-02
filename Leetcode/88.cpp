class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m - 1;
        int j = m + n - 1;
        int k = n - 1;

        while(i >= 0 && k >= 0){

            if(nums2[k] >= nums1[i]){
                nums1[j--] = nums2[k--];
            }

            else{
                nums1[j--] = nums1[i--];
            }

        }

        while(k >= 0){

            nums1[j--] = nums2[k--];

        }

    }
};