class Solution {
public:
    int countPoints(string rings) {
        
        constexpr int NO_RINGS = 10;
        int answer{};

        vector<bitset<4>> ringsMap(NO_RINGS);
        unordered_map<char, int> rgbMap{
            {'R', 0}, {'G', 1}, {'B', 2}
        };

        for(int i = 0; i < rings.size(); i += 2){
            ringsMap[rings[i + 1] - '0'][rgbMap[rings[i]]] = 1;
            if(ringsMap[rings[i + 1] - '0'].count() == 3) {
                ringsMap[rings[i + 1] - '0'][3] = 1;
                answer++;
            } 
        }

        return answer;
    }
};