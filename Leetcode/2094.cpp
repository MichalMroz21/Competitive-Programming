class Solution {
public:


    vector<int> findEvenNumbers(vector<int>& digits) {
        
        unordered_map<int, int> cntMap{};
        for(auto i : digits) cntMap[i]++;

        vector<int> ans{};

        for(int i = 100; i <= 998; i += 2){

            int cnt{}, n{i};

            unordered_map<int, int> group{};

            while(n){
                group[n % 10]++;
                n /= 10;
            }

            bool canMake = true;

            for(auto [key, value] : group){
                if(cntMap[key] < value) canMake = false;
            }

            if(canMake) ans.push_back(i);
        }

        return ans;
    }
};