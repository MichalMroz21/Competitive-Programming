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

        void unionSet(int a, int b){

            int firstRoot = find(a);
            int secondRoot = find(b);

            if(firstRoot != secondRoot){

                if(rank[firstRoot] < rank[secondRoot]){

                    root[firstRoot] = secondRoot;

                }

                else if(rank[firstRoot] > rank[secondRoot]){

                    root[secondRoot] = firstRoot;

                }

                else{

                    root[firstRoot] = secondRoot;
                    rank[secondRoot]++;

                }

            }

        }

        bool isConnected(int a, int b){

            return find(a) == find(b);

        }

    };

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        disjointSet* ds = new disjointSet(n);

        for(auto& i : edges){

            ds->unionSet(i[0], i[1]);

        }

        return ds->isConnected(source, destination);

    }
};