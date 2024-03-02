class Solution {
public:

    string say(string said){

        string str{};

        char previous{'\0'};
        int count{};

        said += '\0';

        for(char& ch : said){

            if(ch != previous && previous != '\0'){

                str += to_string(count) + previous;
                count = 0;
            }

            count++;        
            previous = ch;
        }

        return str;
    }

    string countAndSay(int n) {
        
        if(n == 1) return "1";
        return say(countAndSay(n - 1));

    }
};