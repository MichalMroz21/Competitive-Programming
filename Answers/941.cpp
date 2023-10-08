class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n = arr.size();

        if(n < 3) return false;

        bool increasing = false, decreasing = false;

        for(int i = 0; i < n - 1; i++){

            bool comp{};

            if(arr[i] == arr[i + 1]) return false;

            if(arr[i] < arr[i + 1]) comp = 0;
            else comp = 1;

            if(increasing == false && comp == 0) increasing = true;
            else if(increasing == true && comp == 1) decreasing = true;

            else if(increasing == false && comp == 1 || decreasing == true && comp == 0) return false;
            
        }

        return decreasing;
    }
};