class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        
        int maxDistance{};

        int i = 0;
        int j = 0;

        while(i != nums1.size() && j != nums2.size()){

            if(i > j) {j++; continue;}
            if(nums2[j] < nums1[i]) i++;
            else{
                maxDistance = max(maxDistance, j - i);
            }
            j++;

        }

        return maxDistance;

    }
};