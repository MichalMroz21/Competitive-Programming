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

        bool unionSet(int a, int b){

            int rootFirst = find(a);
            int rootSecond = find(b);

            if(rootFirst == rootSecond) return false;

            else{

                if(rank[rootFirst] < rank[rootSecond]){

                    root[rootFirst] = rootSecond;

                }

                else if(rank[rootFirst] > rank[rootSecond]){

                    root[rootSecond] = rootFirst;

                }

                else{

                    root[rootFirst] = rootSecond;
                    rank[rootSecond]++;

                }

            }

            return true;

        }

    };

    int earliestAcq(vector<vector<int>>& logs, int n) {
        
        sort(logs.begin(), logs.end());

        int ret{};
        disjointSet* ds = new disjointSet(n);

        for(int i = 0; i<logs.size(); i++){

            if(ds->unionSet(logs[i][1], logs[i][2])){
                ret = logs[i][0];
                n--;
            }

        }

        if(n == 1) return ret;
        return -1;
    }
};