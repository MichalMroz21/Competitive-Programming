class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map <int, int> count{};

        for(auto i : nums1){
            count[i]++;
        }

        int indexCount{};
        for(auto i : nums2){

            if(count[i] > 0){
                count[i]--;
                nums2[indexCount++] = i;
            }

        }

        return vector<int>(nums2.begin(), nums2.begin() + indexCount);
        
    }
};