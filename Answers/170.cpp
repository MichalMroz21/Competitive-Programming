class TwoSum {
public:

    unordered_map<int, int> mp{};

    TwoSum() {
        
    }
    
    void add(int number) {
        mp[number]++;
    }
    
    bool find(int value) {
        for(auto& [key, cnt] : mp){
            
            if(key >= 0 && value < INT_MIN + key ) continue;
            if(value >= 0 && key < INT_MIN + value ) continue;
            if(mp.count(value - key) && (key != value - key || cnt > 1)) return true;

        }

        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */