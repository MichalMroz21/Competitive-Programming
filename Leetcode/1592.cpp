class Solution {
public:
    string reorderSpaces(string text) {
        int spaces{}, words{}, extra{};
        for(auto i : text) if(i == ' ') spaces++;

        stringstream ss(text), ss2(text);

        string word{}, ans{};

        while(ss2 >> word) words++;

        if(words == 1) {
            if(spaces == 0) return text;
            else{
                extra = spaces;
                spaces = 0;
            }
        }
        else{
            extra = spaces % (words - 1);
            spaces /= (words - 1);
        }

        while(ss >> word){
            ans += string(spaces, ' ') + word;
        }

        int firstNotSpace{};
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] != ' '){
                firstNotSpace = i;
                break;
            }
        }

        ans = ans.substr(firstNotSpace);
        ans += string(extra, ' ');

        return ans;
    }
};