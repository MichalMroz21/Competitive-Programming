class Solution {
public:
    string capitalizeTitle(string title) {
        int i{}, j{};

        title.push_back(' ');

        int n = title.size();

        while(j != n){

            if(title[j] == ' '){

                int currN = j - i;

                if(currN > 2) {
                    title[i] = toupper(title[i]);
                    i++;
                    currN--;
                }

                while(currN){
                    title[i] = tolower(title[i]);
                    i++;
                    currN--;
                }

                j++;
                i = j;
            }

            else j++;
        }

        title.pop_back();

        return title;
    }
};