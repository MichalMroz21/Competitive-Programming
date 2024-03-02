class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        
        unordered_map<string, bool> strMap{};

        int answer{};

        for(auto& str : words) {

            string rev = str;
            int i{}, j = rev.size() - 1;

            while(i < j) swap(rev[i++], rev[j--]);

            if(strMap[rev]) {answer++; strMap[rev] = false;}

            strMap[str] = true;
        }

        return answer;

    }
};