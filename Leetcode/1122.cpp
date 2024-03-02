class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> freqMap(*max_element(arr1.begin(), arr1.end()) + 1);

        for(auto i : arr1) freqMap[i]++;

        int i = 0, n = arr1.size();

        for(auto num : arr2){

            while(freqMap[num]--){
                arr1[i++] = num;
            }

        }

        for(int j = 0; j < freqMap.size(); j++){

            while(freqMap[j]-- > 0){
                arr1[i++] = j;
            }

        }

        return arr1;

    }
};