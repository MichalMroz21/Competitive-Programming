class Solution {
public:

    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int> indegrees(n, 0);
        vector<int> outdegrees(n, 0);

        for(auto& i : trust){

            indegrees[i[1] - 1]++;
            outdegrees[i[0] - 1]++;

        }

        for(int i = 0; i<n; i++){

            if(indegrees[i] == n - 1 && outdegrees[i] == 0) return i + 1;

        }


        return -1;

    }
};