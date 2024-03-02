class Solution {
public:

    class disjointSet{
    public:
    
        unordered_map<int, int> root{};
        unordered_map<int, int> rank{};

        int maxCount{};

        int find(int a){

            if(root[a] == a) return a;
            root[a] = find(root[a]);
            return root[a];
        }

        void basicCheck(int a){
            if(root[a] == 0){
                root[a] = a;
                rank[a] = 1;
                maxCount = max(maxCount, rank[a]);
            }
        }

        void myUnion(int a, int b){

            if(root[a] == 0){
                root[a] = a;
                rank[a] = 1;
                maxCount = max(maxCount, rank[a]);
            }

            if(root[b] == 0){
                root[b] = b;
                rank[b] = 1;
                maxCount = max(maxCount, rank[b]);
            }

            int firstRoot = find(a);
            int secondRoot = find(b);

            if(firstRoot != secondRoot){

                if(rank[firstRoot] <= rank[secondRoot]){

                    root[firstRoot] = secondRoot;
                    rank[secondRoot] += rank[firstRoot];
                    maxCount = max(maxCount, rank[secondRoot]);
                }

                else if(rank[firstRoot] > rank[secondRoot]){

                    root[secondRoot] = firstRoot;
                    rank[firstRoot] += rank[secondRoot];
                    maxCount = max(maxCount, rank[firstRoot]);
                }

            }

        }
    };


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        disjointSet* ds = new disjointSet();

        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0; i < m; i++){

            for(int j = 0; j < n; j++){

                int a = i * n + j + 1; 

                if(grid[i][j] == 0) continue;

                ds->basicCheck(a);

                if(i + 1 < m && grid[i + 1][j] == 1){
                    ds->myUnion(a, ((i + 1) * n) + j + 1);
                }

                if(j + 1 < n && grid[i][j + 1] == 1){
                    ds->myUnion(a, (i * n) + j + 2);
                }
            }

        }

        return ds->maxCount;

    }
};