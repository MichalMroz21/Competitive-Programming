class SnapshotArray {
public:

    vector<vector<pair<int, int>>> snaps{};
    int snapId{};

    SnapshotArray(int length) {
        snaps.resize(length);
    }
    
    void set(int index, int val) {

        if(snaps[index].empty() || snaps[index].back().second < snapId){
            snaps[index].push_back(make_pair(val, snapId));
        }

        else snaps[index].back().first = val;
    }
    
    int snap() {
        return snapId++;
    }
    
    int get(int index, int snap_id) {

        int n = snaps[index].size();

        if(n == 0) return 0;

        int L = 0, R = n - 1, ret = 0;

        while(L + 1 < R){

            int m = L + (R - L)/2;

            if(snaps[index][m].second == snap_id) return snaps[index][m].first;
            else if(snaps[index][m].second < snap_id) L = m;
            else R = m - 1;
        }

        if(snaps[index][R].second <= snap_id) ret = snaps[index][R].first;
        else if(snaps[index][L].second <= snap_id) ret = snaps[index][L].first;

        return ret;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */