class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        int cnt{};
        string temp{};
        while(ss >> temp) cnt++;
        return cnt;
    }
};