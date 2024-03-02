class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
       int a{};
       int m = flowerbed.size();

       if(m == 0) return n == 0 ? true : false;
       if(m == 1) {if(flowerbed[0] == 0){a++;} return n <= a;}
       if(flowerbed[0] == 0 && flowerbed[1] == 0) {flowerbed[0] = 1; a++;}

       int i = 1;

       for(i = 1; i < m - 1; i++){

           if(flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0){
               flowerbed[i] = 1;
               a++;
           }

       }

       if(flowerbed[i] == 0 && flowerbed[i - 1] == 0){
           flowerbed[i] = 1;
           a++;
       }

       return n <= a;

    }
};