class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        unordered_map<int, int> countMap{};

        for(auto i : target) countMap[i]++;

        for(auto i : arr){
            countMap[i]--;
            if(countMap[i] == -1) return false;
        }

        return true;

    }
};