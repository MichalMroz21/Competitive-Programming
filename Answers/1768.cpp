class Solution {
public:
    string mergeAlternately(string word1, string word2) {

       string ret{};

       int n = word1.size();
       int m = word2.size();

       int i{};
       int j{};

       while(i < n || j < m){

           if(i >= n){
               ret.push_back(word2[j]);
           }

           else if(j >= m){
               ret.push_back(word1[i]);
           }

          else{
                ret.push_back(word1[i]);
                ret.push_back(word2[j]);
          }

           i++;
           j++;
       }

        return ret;

    }
};