class TimeMap {
public:

    unordered_map<string, vector<pair<string, int>>> timeMap{};

    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        timeMap[key].push_back(make_pair(value, timestamp));
    }
    
    string get(string key, int timestamp) {
        
        int n = timeMap[key].size();

        if(n == 0) return "";

        int L{}, R = n - 1;
        string ret = "";

        while(L + 1 < R){

            int m = L + (R - L)/2;

            if(timeMap[key][m].second > timestamp) R = m - 1;
            else L = m;
        }

        if(timeMap[key][R].second <= timestamp) ret = timeMap[key][R].first;
        else if(timeMap[key][L].second <= timestamp) ret = timeMap[key][L].first;

        return ret;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */