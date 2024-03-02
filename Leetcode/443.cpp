class Solution {
public:
    int compress(vector<char>& chars) {

       char prev = chars[0];
       int count{1};
       int insertIndex{};
       chars.push_back(chars[chars.size() - 1]);
       int n = chars.size();

       if(n == 1) return 1;

       for(int i=1; i<n; i++){

           int curr = chars[i];
           if(prev != curr || i == n - 1){

               chars[insertIndex++] = prev;
               if(count != 1){
                    string str = to_string(count);
                    for(auto s : str){
                        chars[insertIndex++] = s;
                    }
               }

               prev = curr;
               count = 1;

           }
           else{
               count++;
           }

       }

       return insertIndex; 
        
        
    }
};