class StringIterator {
public:

    int currCnt{}, i{-1}, n{};
    string str{};

    StringIterator(string compressedString) : str(compressedString), n(compressedString.size()) {}
    
    void setAtNextLetter(){

        while(i != n && isdigit(str[++i])){}

        int iCopy = i;

        while(i != n && isdigit(str[++iCopy])){
            currCnt *= 10;
            currCnt += str[iCopy] - '0';
        }
        
    }

    char next() {
        if(currCnt == 0) setAtNextLetter();
        if(i == n) return ' ';

        currCnt--;
        return str[i];
    }
    
    bool hasNext() {
        if(currCnt == 0) setAtNextLetter();
        return i != str.size();
    }
};

/**
 * Your StringIterator object will be instantiated and called as such:
 * StringIterator* obj = new StringIterator(compressedString);
 * char param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */