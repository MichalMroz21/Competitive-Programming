class Solution {
public:
    string defangIPaddr(string address) {
        
        for(int i = 0; i < address.size(); i++){
            if(address[i] == '.') {
                address.insert(address.begin() + i, '[');
                address.insert(address.begin() + i + 2, ']');

                i += 2;
            }
        }

        return address;
    }
};