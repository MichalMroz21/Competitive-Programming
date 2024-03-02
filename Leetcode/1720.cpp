class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> decoded{first};

        for(auto i : encoded){

            first = i ^ first;
            decoded.push_back(first);

        }

        return decoded;

    }
};