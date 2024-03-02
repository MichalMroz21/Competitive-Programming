class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        double countLetter{};

        for(auto& i : s) if(i == letter) countLetter++;

        double p = countLetter / s.size();

        p *= 100;
        return static_cast<int>(p); 

    }
};