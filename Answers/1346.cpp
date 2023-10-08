class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        int n = arr.size();
        
        unordered_map <int, bool> hashMap{};

        for(int i=0; i<n; i++){

            int a = arr[i];

            if(hashMap[2*a]) return true;
            if(hashMap[a/2] && a % 2 != 1) return true;

            hashMap[a] = true;

        }

        return false;

    }
};