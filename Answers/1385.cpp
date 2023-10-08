class Solution {
public:


    bool checkDistance(vector<int>& arr2, int d, int k){

        int L = 0;
        int R = arr2.size() - 1;

        while(L + 1 < R){

            int m = L + (R - L)/2;
            int a = arr2[m];

            if(a == k) {R = m; break;}
            else if(k > a) L = m;
            else R = m;
        }

        int closer{};

        int d1 = abs(k - arr2[L]);
        int d2 = abs(k - arr2[R]);

        if(d1 < d2){
            closer = d1;
        }

        else{
            closer = d2;
        }

        if(closer <= d) return false;
        return true;

    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin(), arr2.end());
        int res{};

        for(int i=0; i<arr1.size(); i++){

            int k = arr1[i];

            if(checkDistance(arr2, d, k)) res++;

        }

        return res;

    }
};