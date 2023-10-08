class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        vector<vector<int>> res{};

        int n = nums1.size(), m = nums2.size(), i{}, j{};

        while(i < n || j < m){
            if(i != n && (j == m || nums1[i][0] < nums2[j][0])) res.push_back({nums1[i][0], nums1[i++][1]});
            else if(j != m && (i == n || nums1[i][0] > nums2[j][0])) res.push_back({nums2[j][0], nums2[j++][1]}); 
            else res.push_back({nums1[i][0], nums1[i++][1] + nums2[j++][1]});
        }

        return res;
    }
};