class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        int i{}, j{}, k{}, n = arr1.size(), m = arr2.size(), o = arr3.size();

        vector<int> ans{};

        while(i < n && j < m && k < o){

            int lowestIndex{}, temp{};

            if(arr1[i] == arr2[j] && arr3[k] == arr1[i]){
                ans.push_back(arr1[i]);
                i++;
                j++;
                k++;
                continue;
            }

            if(arr1[i] < arr2[j]) temp = 1;
            else temp = 2;

            if(temp == 1 && arr3[k] < arr1[i]) temp = 3;
            else if(temp == 1) temp = 1;
            else if(arr3[k] < arr2[j]) temp = 3;

            if(temp == 1) i++;
            if(temp == 2) j++;
            if(temp == 3) k++;
        }

        return ans;
    }
};