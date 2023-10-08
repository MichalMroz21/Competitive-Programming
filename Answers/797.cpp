class Solution {
public:

    void dfs(int destination, vector<vector<int>>& graph, vector<int>& comb, vector<vector<int>>& ret){

        int curr = comb.back();
        if(curr == destination) ret.push_back(comb);

        for(auto i : graph[curr]){

            comb.push_back(i);
            dfs(destination, graph, comb, ret);
            comb.pop_back();

        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n = graph.size();
        int destination = n - 1;
       
        vector<vector<int>> ret{};
        vector<int> comb{};
        comb.push_back(0);

        dfs(destination, graph, comb, ret);
        return ret;
    }
};