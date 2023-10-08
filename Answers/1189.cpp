class Solution {
public:
    int maxNumberOfBalloons(string text) {
     
        //balloon  x2 l, x2 o, x1 n, x1 b, x1 a
        unordered_map<char, int> countMap{
            {'l', 0}, {'o', 0}, {'n', 0}, {'b', 0}, {'a', 0}
        };

        int maximumQuantity{};

        for(auto& i : text) {

            if(i == 'l' || i == 'o' || i == 'n' || i == 'b' || i == 'a'){
                countMap[i]++;

                if(i == 'l' || i == 'o') maximumQuantity = max(maximumQuantity, countMap[i] / 2);
                else maximumQuantity = max(maximumQuantity, countMap[i]);
            }

        }

        int smallestLetterQuantity{maximumQuantity};

        for(auto& [key, value] : countMap){

            int quantity{};

            if(key == 'l' || key == 'o') quantity = value/2;
            else quantity = value;

            smallestLetterQuantity = min(smallestLetterQuantity, quantity); 

        }

        return smallestLetterQuantity;
    }
};