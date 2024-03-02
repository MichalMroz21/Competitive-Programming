class Solution {
public:

    class disjointSet{

        private:
            unordered_map<string, string> root{};
            unordered_map<string, int> rank{};
            unordered_map<string, double> multiplication{};

        public:

            string find(string a){

                if(root.find(a) == root.end()) return string{};

                while(a != root[a]){
                    a = root[a];
                }     
                return a;
            }

            double findMultiplication(string a){

                double mul = 1.0;

                while(a != root[a]){
                    mul *= multiplication[a];
                    a = root[a];
                }

                return mul;
            }

            void unionSet(string a, string b, double value){

                string rootFirst = find(a);
                if(rootFirst == string{}){
                    root[a] = a;
                    rootFirst = a;
                    rank[a] = 1;
                    multiplication[a] = 1.0;
                }

                string rootSecond = find(b);
                if(rootSecond == string{}){
                    root[b] = b;
                    rootSecond = b;
                    rank[b] = 1;
                    multiplication[b] = 1.0;
                }

                if(rootSecond != rootFirst){

                    if(rank[rootFirst] < rank[rootSecond]){

                        root[rootFirst] = rootSecond;
                        multiplication[rootFirst] = value * findMultiplication(b) / findMultiplication(a);

                    }

                    else if(rank[rootFirst] > rank[rootSecond]){

                        root[rootSecond] = rootFirst;
                        multiplication[rootSecond] = 1/value * findMultiplication(a);

                    }

                    else{

                        root[rootFirst] = rootSecond;
                        multiplication[rootFirst] = value * findMultiplication(b) / findMultiplication(a);
                        rank[rootSecond]++;

                    }

                }
            }

           bool isConnected(string a, string b){
               if(find(a) == string{} && find(b) == string{}) return false;
               return find(a) == find(b);
           } 

    };


    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        disjointSet* ds = new disjointSet();
        int j = 0;

        for(auto i : equations){

            ds->unionSet(i[0], i[1], values[j]);
            j++;
        }

        vector<double> ans{};

        for(auto i : queries){

            if(ds->isConnected(i[0], i[1])){

                ans.push_back(ds->findMultiplication(i[0]) / ds->findMultiplication(i[1]));

            }
            else ans.push_back(-1.0);
        }

        
        return ans;
    }
};