class Solution {
public:
    int minOperations(string s) {
        
        int curr = '0', curr2 = '1', ans{}, ans2{};

        for(auto i : s){

            if(i != curr) ans++;
            if(i != curr2) ans2++;

            swap(curr, curr2);
        }

        return min(ans, ans2);
    }
};