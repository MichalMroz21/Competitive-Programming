class Solution {
public:
    string freqAlphabets(string s) {
        
        int i{};
        int k{};
        int j = {i + 2};
        int n = s.size();

        while(i < n){

            if(j >= n) s[k++] = 'a' + (s[i] - '1');
            else if(s[j] == '#'){

                int a = (s[i] - '0') * 10 + s[i+1] - '0';
                s[k++] = 'a' + a - 1;
                i = j;
                j = i + 2;

            }

            else{

                s[k++] = 'a' + (s[i] - '1');

            }

            i++;
            j++;
        }

        return s.erase(k, n - k);

    }
};