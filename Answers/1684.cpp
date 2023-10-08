class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        unordered_map<char, bool> allowedMap{};

        for(auto i : allowed){
            allowedMap[i] = true;
        }

        int answer{};
        
        for(auto& word : words){

            bool isValid = true;

            for(auto i : word){
                if(allowedMap[i] == false){
                    isValid = false;
                    break;
                }
            }

            if(isValid) answer++;
        }

        return answer;
    }

    
};