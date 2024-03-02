class Solution {
public:

    class disjointSet{
        private:
            vector<int> root{};
            vector<int> rank{};
            int sets{};

        public:
            disjointSet(int n) : root(n), rank(n){

                for(int i = 0; i < n; i++){

                    root[i] = i;
                    rank[i] = 1;
                    sets = n;
                }

            }

            int getSets(){
                return this->sets;
            }

            int find(int a){

                if(a == root[a]) return a;

                root[a] = find(root[a]);
                return root[a];

            }

            bool unionSet(int a, int b){

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

                    sets--;
                    return true;
                }
                return false;
            }

    };


    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        disjointSet* ds = new disjointSet(rooms.size());

        stack<int> keys{};
        keys.push(0);

        while(!keys.empty()){

            int currKey = keys.top();
            keys.pop();

            for(auto& i : rooms[currKey])

            if(ds->unionSet(currKey, i)){
                keys.push(i);
            }

        }

        return ds->getSets() == 1;

    }
};