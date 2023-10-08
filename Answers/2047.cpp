class Solution {
public:

    bool isLetter(char ch){
      return ch >= 'a' && ch <= 'z';
    }

    int countValidWords(string sentence) {
        
        stringstream ss(sentence);

        string temp{};

        int ans{};

        while(ss >> temp){

            bool isValid{true};

            int n = temp.size(), punctCnt{}, hypCnt{};

            for(int i = 0; i < n; i++){

                char ch = temp[i];

                if(isLetter(ch)){
                    continue;
                }
                else if(ispunct(ch) && ch != '-'){

                    punctCnt++;

                    if(i != n - 1 || punctCnt == 2){
                      isValid = false;
                      break;
                    }

                }
                else if(ch == '-'){

                    hypCnt++;

                    if(hypCnt == 2 || i == 0 || i == n - 1 || !isLetter(temp[i -1]) || !isLetter(temp[i + 1])){
                        isValid = false;
                        break;
                    } 

                }
                else{
                    isValid = false;
                    break;
                }

            }

            ans += isValid;
        }

        return ans;
    }
};