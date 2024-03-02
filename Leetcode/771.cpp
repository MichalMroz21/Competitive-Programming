class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char, bool> jewelsExist{};

        for(auto i : jewels){
            jewelsExist[i] = true;
        }

        int answer{};

        for(auto i : stones){
            if(jewelsExist[i]) answer++;
        }

        return answer;

    }
};