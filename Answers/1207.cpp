class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int> countMap{};

        for(int& num : arr){
            countMap[num]++;
        }

        unordered_map<int, bool> metBefore{};

        for(auto& [key, value] : countMap){

            if(metBefore[value]) return false;

            metBefore[value] = true;

        }

        return true;

    }
};