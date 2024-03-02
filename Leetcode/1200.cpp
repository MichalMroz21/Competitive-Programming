class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        vector<vector<int>> resultArr{};

        int minimumDiff = numeric_limits<int>::max();

        int n = arr.size();

        for(int i = 0; i < n - 1; i++){
            minimumDiff = min(minimumDiff, abs(arr[i] - arr[i + 1]));
        }

        for(int i = 0; i < n - 1; i++){

            int firstN = arr[i];
            int secondN = arr[i + 1];

            if(abs(firstN - secondN) == minimumDiff) resultArr.push_back( {firstN, secondN} );
        }

        return resultArr;
    }
};