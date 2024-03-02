class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
        
        int prevChange{};
        bool anyChange{};

        do{
            anyChange = false;

            for(int i = 1; i < arr.size() - 1; i++){

                if(arr[i] > arr[i - 1] - prevChange && arr[i] > arr[i + 1]){
                    arr[i]--;
                    prevChange = -1;
                    anyChange = true;
                }

                else if(arr[i] < arr[i - 1] - prevChange && arr[i] < arr[i + 1]){
                    arr[i]++;
                    prevChange = 1;
                    anyChange = true;
                }
                
                else{
                    prevChange = 0; 
                }

            }

        } while(anyChange);

        return arr;
    }
};