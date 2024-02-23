class Solution {
public:
    int numberCount(int a, int b) {
        
        int ans{};

        for(int i = a; i <= b; i++){

            int j = i, add{1};

            unordered_map<int, bool> mp{};

            while(j){
                
                if(mp[j % 10] == 1){
                    add = 0;
                    break;
                }

                mp[j % 10] = 1;
                j /= 10;
            }

            ans += add;
        }

        return ans;
    }
};