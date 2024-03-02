class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        
        unordered_map<int, int> map{};

        for(int i = 0; i < pieces.size(); i++){
            map[pieces[i][0]] = i;
        }

        int i{};

        while(i < arr.size()){

            for(auto j : pieces[map[arr[i]]]){

                //if(i == arr.size()) return false;
                if(arr[i] != j) return false;
                i++;
            }

        }

        return true;
    }
};