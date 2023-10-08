class Solution {
public:
    string sortString(string s) {

        string result{};
        constexpr int FREQ_SIZE = 'z' - 'a' + 1;
        int maxFreq{};
        vector<int> freq(FREQ_SIZE);

        for(auto i : s) maxFreq = max(maxFreq, ++freq[i - 'a']);
        
        while(maxFreq--){

            for(int i = 0; i < FREQ_SIZE; i++){

                if(freq[i] > 0){
                    result += i + 'a';
                    freq[i]--;
                }

            }

            for(int i = FREQ_SIZE - 1; i >= 0; i--){

                if(freq[i] > 0){
                    result += i + 'a';
                    freq[i]--;
                }

            }

        }

        return result;
    }
};