class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        unordered_map<char, bool> metBefore{};
        int cnt{}, diffCnt{};

        for(int i = 0; i < s.size(); i++){

            if(distance[s[i] - 'a'] == i - 1 && metBefore[s[i]]) cnt++;

            distance[s[i] - 'a'] += i; 
            
            diffCnt += !metBefore[s[i]];
            metBefore[s[i]] = true;

        }

        return cnt == diffCnt;
    }
};