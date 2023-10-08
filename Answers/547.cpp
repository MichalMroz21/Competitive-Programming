class Solution {
public:

    class disjointSet{
    private:

        vector<int> root{};
        vector<int> rank{};
        int answer{};

    public:
        disjointSet(int size){

            root.resize(size);
            rank.resize(size);
            answer = size;

            for(int i = 0; i < size; i++){

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
                    root[rootSecond] = rootFirst;
                    rank[rootFirst]++;
                }

                answer--;
            }

        }

        bool isConnected(int a, int b){

            return find(a) == find(b);

        }
        
        int getAnswer(){
            return this->answer;
        }
    };


    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        disjointSet* ds = new disjointSet(n);

        for(int i = 0; i < n - 1; i++){

            for(int j = i + 1; j < n; j++){

                if(isConnected[i][j]){
                    ds->unionSet(i, j);
                }

            }

        }

        return ds->getAnswer();
    }
};