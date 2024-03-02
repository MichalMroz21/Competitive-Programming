class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> existMap{};

        for(auto i : nums1) existMap[i] = 1;

        vector<int> answer{};

        for(auto i : nums2){
            if(existMap[i] == 1){
                answer.push_back(i);
                existMap[i]++;
            } 
        }

        return answer;

    }
};