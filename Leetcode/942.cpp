class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int n = s.size(), maxN = n, minN{};

        vector<int> a{};

        for(auto i : s) a.push_back(i == 'I' ? minN++ : maxN--);

        a.push_back(s.back() == 'I' ? minN++ : maxN--);

        return a;

    }
};