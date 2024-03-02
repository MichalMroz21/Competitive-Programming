class Solution {
public:

    class disjointSet{
        private:
            vector<int> root{};
            vector<int> rank{};

        public:
            disjointSet(int n) : root(n), rank(n){

                for(int i = 0; i < n; i++){
                    root[i] = i;
                    rank[i] = 1;
                }

            }

            int find(int a){

                if(a == root[a]) return a;

                root[a] = find(root[a]);
                return root[a];

            }

            int unionSet(int a, int b){

                int rootFirst = find(a);
                int rootSecond = find(b);

                if(rootFirst == rootSecond) return 0;

                if(rank[rootFirst] < rank[rootSecond]) root[rootFirst] = rootSecond;

                else if(rank[rootFirst] > rank[rootSecond]) root[rootSecond] = rootFirst;

                else{

                    root[rootFirst] = rootSecond;
                    rank[rootSecond]++;

                }

                return 1;
            }

    };


    int countComponents(int n, vector<vector<int>>& edges) {
        
        disjointSet* ds = new disjointSet(n);

        int N = edges.size();

        for(int i = 0; i < N; i++){

            n -= ds->unionSet(edges[i][0], edges[i][1]);

        }

        return n;
    }
};