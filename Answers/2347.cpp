class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int, int> suitsMap{}, pairMap{};

        for(auto i : suits)
            if(++suitsMap[i] == 5) return "Flush";
        

        bool thereWas2 = false;

        for(auto i : ranks){
            if(++pairMap[i] == 2) thereWas2 = true;
            if(pairMap[i] == 3) return "Three of a Kind";
        }

        if(thereWas2) return "Pair";

        return "High Card";
    }
};