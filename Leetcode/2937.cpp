class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {

        vector<int> sizes{(int)s1.size(), (int)s2.size(), (int)s3.size()};
        sort(sizes.begin(), sizes.end());

        int i{},
            n = sizes[0],
            m = sizes[1],
            k = sizes[2];

        for(i = 0; i < n; i++){
            if(s1[i] != s2[i] || s1[i] != s3[i] || s2[i] != s3[i]) break;
        }

        return i == 0 ? -1 : m - i + k - i + n - i;
    }
};