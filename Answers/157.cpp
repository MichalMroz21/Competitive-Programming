/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *buf4);
 */

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        
        int ans{}, j{};

        while(n >= 4){

            int readChars = read4(buf + j);
            
            n -= readChars;
            ans += readChars;
            j += readChars;

            if(readChars < 4) break;

        }

        if(n){
            char* buf4 = new char[4];

            int readChars = read4(buf4);

            for(int i = 0; i < readChars && i < n; i++){
                buf[j++] = buf4[i];
            }

            ans += min(readChars, n);
        }   

        return ans;
    }
};