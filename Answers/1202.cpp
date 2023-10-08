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

            if(firstRoot == secondRoot) return;

            else{

                if(rank[firstRoot] < rank[secondRoot]){

                    root[firstRoot] = secondRoot;

                }

                else if(rank[firstRoot] > rank[secondRoot]){

                    root[secondRoot] = firstRoot;

                }

                else{

                    root[firstRoot] =  secondRoot;
                    rank[secondRoot]++;

                }

            }
        }


    };


    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        
        disjointSet* ds = new disjointSet(s.size());

        for(int i = 0; i<pairs.size(); i++){
            ds->unionSet(pairs[i][0], pairs[i][1]);
        }

        unordered_map<int, vector<int>> groupByRoot{};

        for(int i = 0; i < s.size(); i++){

            groupByRoot[ds->find(i)].push_back(i);

        }

        for(auto [key, value] : groupByRoot){

            string temp{};

            for(auto i : value){

                temp.push_back(s[i]);

            }

            sort(temp.begin(), temp.end());

            int j = 0;
            
            for(auto i : value){

                s[i] = temp[j];
                j++;
            }
        }

        return s;

    }
};