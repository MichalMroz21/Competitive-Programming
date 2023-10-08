class RecentCounter {
public:

    vector<int> requests{};
    int globalCnt{};

    RecentCounter() {
    }
    
    int ping(int t) {
        int cnt{};
        requests.push_back(t);

        int min = t - 3000;

        for(int i = requests.size() - 1; i >= 0; i--){

            if(requests[i] < min) break;
            else cnt++;

        }

        return cnt;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */