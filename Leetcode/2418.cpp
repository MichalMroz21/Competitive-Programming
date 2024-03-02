class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        priority_queue<pair<int, string>> heap{};

        for(int i = 0; i < names.size(); i++){
            heap.push(make_pair(heights[i], names[i]));
        }

        vector<string> ret{};

        while(!heap.empty()){

            pair<int, string> curr = heap.top();
            heap.pop();
            ret.push_back(curr.second);

        }

        return ret;

    }
};