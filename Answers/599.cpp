class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        unordered_map<string, int> indexMap{};

        for(int i = 0; i < list2.size(); i++){

                indexMap[list2[i]] = i + 1;
            
        }

        int minSum{INT_MAX};

        for(int i = 0; i < list1.size(); i++){
            if(indexMap[list1[i]] != 0){
                minSum = min(minSum, i + indexMap[list1[i]]);
            }
        }

        if(minSum == INT_MAX) return {};

        vector<string> ret{};

        for(int i = 0; i < list1.size(); i++){

            if(indexMap[list1[i]] != 0){
                if(i + indexMap[list1[i]] == minSum){
                    ret.push_back(list1[i]);
                }
            }

        }

        return ret;
    }
};