class OrderedStream {
public:

    vector<string> strs{};

    int currIndex{}, n{};

    OrderedStream(int n) : strs(n), n(n) {}
    
    vector<string> insert(int idKey, string value) {

        strs[idKey - 1] = value;

        int startingPoint = currIndex;

        while(currIndex < n && strs[currIndex] != ""){
            currIndex++;
        }

        return vector<string>(strs.begin() + startingPoint, strs.begin() + currIndex);
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */