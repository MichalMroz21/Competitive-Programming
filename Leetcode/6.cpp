class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows < 1) return "";
        if(numRows == 1) return s;

        vector<string> strArr(numRows, "");
        bool goDown = true;
        int strArrIndex = 0;

        for(auto i : s){
           strArr[strArrIndex].push_back(i);

           if(strArrIndex + 1 == numRows) goDown = false;
           if(strArrIndex == 0) goDown = true;

           if(goDown) strArrIndex++;
           if(!goDown) strArrIndex--;
        }

        string str{};
        for(int i=0; i<numRows; i++){
            str += strArr[i];
        }
        return str;
    }
};
