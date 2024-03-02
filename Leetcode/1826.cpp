class Solution {
public:

    bool checkSens(int start, vector<int>& sensor1, vector<int>& sensor2){

        int s2 = start + 1;

        for(int s1 = start; s1 < sensor1.size() - 1; s1++){
            if(sensor1[s1] != sensor2[s2++]) return false;
        }

        return true;
    }

    int badSensor(vector<int>& sensor1, vector<int>& sensor2) {
        
        int i{}, n = sensor1.size(), m = sensor2.size();

        for(i = 0; i < n; i++){
            if(sensor1[i] != sensor2[i]) break;
        }

        bool checkShit1 = checkSens(i, sensor1, sensor2),
             checkShit2 = checkSens(i, sensor2, sensor1);

        if(checkShit1 && !checkShit2) return 1;
        else if(!checkShit1 && checkShit2) return 2;
       
        return -1;
    }
};