class Solution {
public:

    bool checkCapacity(vector<int>& weights, int days, int capacity){

        int ship = 1;
        int currentCapacity = capacity;
        for(int i=0; i<weights.size(); i++){

            int a = weights[i];

            if(currentCapacity - a < 0){
                ship++;
                currentCapacity = capacity;
            }

            currentCapacity -= a;
        }

        return ship <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
       
        int L = *max_element(weights.begin(), weights.end());
        int R = accumulate(weights.begin(), weights.end(), 0);

        while(L < R){

            int m = L + (R - L)/2;
    
            if(checkCapacity(weights, days, m)){
                R = m;
            }

            else{
                L = m + 1;
            }
            
        }

        if(checkCapacity(weights, days, R) == true) return R;
        else return 0;

    }

   
};