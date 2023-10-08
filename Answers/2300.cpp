class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(), potions.end());

        vector<int> pairs{};

        size_t n{ spells.size() }, m{ potions.size() };

        for(int i = 0; i < n; i++){

            int spell = spells[i];

            long long minimumPotionValue = ceil(static_cast<double>(success) / spell);

            size_t L{}, R{ m - 1 };

            while(L < R){

                size_t mid{ (R - L)/2 + L }, potion{ static_cast<size_t>(potions[mid]) };

                if(potion < minimumPotionValue) L = mid + 1;
                else R = mid;

            }

            if(potions[R] < minimumPotionValue) pairs.push_back(0);
            else pairs.push_back(m - R);
        }

        return pairs;
    }
};