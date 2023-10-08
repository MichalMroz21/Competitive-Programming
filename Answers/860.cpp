class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        unordered_map<int, int> billsOwned{};
        for(auto i : bills){

            switch(i){

                case 5:{
                    billsOwned[5]++;
                    break;
                }

                case 10:{

                    billsOwned[10]++;
                    if(billsOwned[5] > 0) billsOwned[5]--; 
                    else return false;
                    break;
                }

                case 20:{

                    billsOwned[20]++;
                    
                    if(billsOwned[5] > 0 && billsOwned[10] > 0){
                        billsOwned[5]--;
                        billsOwned[10]--;
                    }

                    else if(billsOwned[5] >= 3){
                        billsOwned[5] -= 3;
                    }

                    else return false;
                    break;
                }

            }

        }

        return true;
    }
};