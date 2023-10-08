class Solution {
public:

    int closetTarget(vector<string>& words, string target, int s) {
        
        int shortestDist{INT_MAX}, n = words.size();

        for(int i = 0; i < n; i++){
            if(words[i] == target){
                shortestDist = min(shortestDist, min(abs(s - i), n - abs(s - i)));
            }
        }

        return shortestDist == INT_MAX ? -1 : shortestDist;
    }
};