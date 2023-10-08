class Solution {
public:

    class disjointSet{
        private:
            vector<int> root{};
            vector<int> rank{};

        public:
        disjointSet(int n){

            root.resize(n);
            rank.resize(n);

            for(int i = 0; i < n; i++){
                root[i] = i;
                rank[i] = 1;
            }

        }

        int find(int a){

            if(root[a] == a) return a;

            root[a] = find(root[a]);
            return root[a];

        }

        bool unionSet(int a, int b){

            int rootFirst = find(a);
            int rootSecond = find(b);

            if(rootFirst != rootSecond){

                if(rank[rootFirst] > rank[rootSecond]){

                    root[rootSecond] = rootFirst;

                }

                else if(rank[rootFirst] < rank[rootSecond]){

                    root[rootFirst] = rootSecond;

                }

                else{
                    root[rootFirst] = rootSecond;
                    rank[rootSecond]++;
                }

                return true;
            }

            else{

                return false;

            }

        }


    };


    bool validTree(int n, vector<vector<int>>& edges) {
        
        disjointSet* ds = new disjointSet(n);
        int N = edges.size();

        for(int i = 0; i < N; i++){

            if(ds->unionSet(edges[i][0], edges[i][1]) == false) return false;

        }

        int a = ds->find(0);

        for(int i = 1; i < n; i++){

            if(ds->find(i) != a) return false;

        }

        return true;
    }
};