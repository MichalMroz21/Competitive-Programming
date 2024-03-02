class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        unordered_map <char, char> letterMap{};

        int diffCounter{};
        char a1, a2, b1, b2;
        for(int i=0; i<s1.size(); i++){

            char a = s1[i];
            char b = s2[i];

            if(a == b) continue;

            else{

                diffCounter++;
                if (diffCounter==1)
                {
                    a1=a;
                    b1=b;
                }
                if (diffCounter==2)
                {
                    if (!(a1==b && a==b1)) return false;
                }
                if(diffCounter > 2) return false;

            }

        }
        if(diffCounter == 1) return false;
        return true;


    }
};