class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> ret{};

        unordered_map<int, string> mp{

            {3, "Fizz"},
            {5, "Buzz"}

        };

        vector<int> divisors = {3, 5};

        for(int i = 1; i <= n; i++){

            string conc{};

            for(auto j : divisors){

                if(!(i % j)) conc += mp[j];

            }
            
            if(conc.empty()) conc = to_string(i);
            ret.push_back(conc);
        }
        return ret;
    }
};