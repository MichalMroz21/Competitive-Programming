class Solution {
public:
    int similarPairs(vector<string>& words) {
        
        unordered_map<string, int> count{};

        for(auto& word : words){
            set<char> st(word.begin(), word.end());
            string temp(st.begin(), st.end());
            count[temp]++;
        }

        int answer{};

        for(auto [key, value] : count)
            answer += value / 2.0 * (value - 1);

        return answer;

    }
};