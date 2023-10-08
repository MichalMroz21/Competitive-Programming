class Solution {
public:
    int minMaxDifference(int num) {
        vector<int> numToArray{};
         vector<int> smaller{};
        
        while(num != 0){
            
            numToArray.push_back(num % 10);
            smaller.push_back(num % 10);
            num /= 10;
            
        }
        
        reverse(numToArray.begin(), numToArray.end());
        reverse(smaller.begin(), smaller.end());
        
        int e{};
        int n = numToArray.size();
        for(int i=0; i<n; i++){
            if(numToArray[i] == 9) continue;
            else {e = numToArray[i]; break;}
        }
        
        for(int i=0; i<n; i++){
            if(numToArray[i] == e) numToArray[i] = 9;
        }
        
        
        int a = smaller[0];
        
        for(int i=0; i<n; i++){
            if(smaller[i] == a) smaller[i] = 0;
        }
        
        int c{}, d{};
        
        for(int i=0; i<n; i++){
            
            c *= 10;
            c += numToArray[i];      
            
            d *= 10;
            d += smaller[i];
            
           
        }
        
        return c - d;
    }
};