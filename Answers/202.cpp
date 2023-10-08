class Solution {
public:
    bool isHappy(int n) {
        
        unordered_map<int, bool> history{};

        while(true){
            int a{};
            while(n != 0){

                a += (n % 10) * (n % 10);
                n /= 10;

            }

            if(history[a] == true) return false;
            if(a == 1) return true;
            n = a;
            history[a] = true;
        }


        return false;
    }
};