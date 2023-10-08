class Solution {
public:
    int minTimeToType(string word) {

        int ans{}, prev = 'a';

        for(int i = 0; i < word.size(); i++){
            
            if(prev < word[i]){
                ans += min(word[i] - prev, prev - 'a' + 'z' - word[i] + 1);
            }
            else{
                ans += min(prev - word[i], word[i] - 'a' + 'z' - prev + 1);
            }
            
            prev = word[i];
        }

        return ans + word.size();

    }
};