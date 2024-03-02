class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, bool> existMapNum{};

        vector<vector<int>> differences{};
        
        differences.resize(2);

        for(int& num : nums1){
            existMapNum[num] = true;
        }

        for(int& num : nums2){

            if(existMapNum[num] == false) {
                existMapNum[num] = true;
                differences[1].push_back(num);
            }

        }

        existMapNum = {};

        for(int& num : nums2){
            existMapNum[num] = true;
        }

        for(int& num : nums1){

            if(existMapNum[num] == false){
                existMapNum[num] = true;
                differences[0].push_back(num);
            } 

        }

        return differences;

    }
};