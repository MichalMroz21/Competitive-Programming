class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char, char> mapChar{{' ', ' '}};

        char ch{'a'};
        int i{-1}, n = key.size();

        while(ch <= 'z' && ++i < n)
            if(mapChar[key[i]] == '\0')
                mapChar[key[i]] = ch++;
            
        for(auto& ch : message)
            ch = mapChar[ch];

        return message;
    }
};