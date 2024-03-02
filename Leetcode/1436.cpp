class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        unordered_map<string, string> map{};

        string lastPath{};

        for(auto& path : paths){

            map[path[0]] = path[1];
            lastPath = path[0];

        }

        string currCity = map[lastPath];

        while(!map[currCity].empty()){

            currCity = map[currCity];

        }

        return currCity;

    }
};