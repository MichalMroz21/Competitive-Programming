class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        int cnt{};

        unordered_set<int> first{}, second{};

        for(int i = 0; i < A.size(); i++){

            first.insert(A[i]);

            cnt += second.count(A[i]);

            second.insert(B[i]);
            
            cnt += first.count(B[i]);

            A[i] = cnt;
        }

        return A;
    }
};