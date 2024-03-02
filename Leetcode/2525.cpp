class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        
        const int dimReq = pow(10, 4), volReq = pow(10, 9), massReq = 100;

        bool isBulky{}, isHeavy{};

        isBulky = ( length >= dimReq || width >= dimReq || height >= dimReq || (length >= volReq/(double)width/(double)height) );
        isHeavy = (mass >= massReq);

        if(isBulky && isHeavy) return "Both";
        if(isBulky) return "Bulky";
        if(isHeavy) return "Heavy";
        return "Neither";
    }
};