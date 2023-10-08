class Solution {
public:

    int binarySearchCount(vector<int>& mat, int n){

        int L = 0;
        int R = n - 1;

        while(L + 1 < R){

            int m = L + (R - L)/2;
            int k = mat[m];

            if(k == 1) L = m;
            else R = m;

        }

        if (L == 0 && mat[L] == 0) return 0;
        return mat[R] == 1 ? R + 1 : L + 1; 

    }


    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int, int>> pq{};
        vector<int> ans{};
        int n = mat.size();
        int m = mat[0].size();

        for(int i=0; i<n; i++){

            int soldiers = binarySearchCount(mat[i], m);
            pq.push(pair<int, int>(soldiers, i));

        }

        while(!(pq.empty())){

            ans.push_back(pq.top().second);
            pq.pop();

        }

        vector<int> temp = vector<int>(ans.rbegin(), ans.rend());
        return vector<int>(temp.begin(), temp.begin() + k);
    }
};