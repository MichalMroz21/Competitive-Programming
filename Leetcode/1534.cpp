class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        sort(arr.begin(), arr.end());
        int n = arr.size(), answer{};

        int maxVal = arr[n - 1];
        vector<int> positionMap(maxVal + 1);

        for(int i = 0; i < n; i++){
            positionMap[arr[i]] = i;
        }
        
        int prev = -1;
        for(int i = 0; i < positionMap.size(); i++){
            if(positionMap[i] == 0 && prev != -1) positionMap[i] = prev;
            if(positionMap[i] != 0) prev = positionMap[i];
        }

        for(int i = 0; i < n; i++){

            int C = arr[i] + c;
            int k{n - 1};
            int L = 0, R = n - 1;

            while(L + 1 < R){
                int m = (R - L)/2 + L;

                if(arr[m] > C) R = m - 1;
                else L = m;
            }

            if(arr[L] <= C) k = L;
            if(arr[R] <= C) k = R;

            if(i == k) continue;

            int A = arr[i] + a, j{n - 1};
            L = 0;
            R = n - 1;

            while(L + 1 < R){
                int m = (R - L)/2 + L;

                if(arr[m] > A) R = m - 1;
                else L = m;
            }

            if(arr[L] <= A) j = L;
            if(arr[R] <= A) j = R;

            if(k < j){
                swap(k, j);
            }

            if(j == i) continue;

            for(int jIter = i + 1; jIter <= j; jIter++){

                if(jIter == k) continue;

                int B = arr[jIter] + b;
                int jIterEnd = (B >= maxVal ? n - 1 : positionMap[B]);

                if(B >= arr[k]) jIterEnd = k;
                if(jIterEnd == jIter) continue;

                answer += jIterEnd - jIter;
            }
        }
        
        return answer;
    }
};