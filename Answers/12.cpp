class Solution {
public:

    string convertSimpleInt(int a, int base) {

    unordered_map <int, string> special{
        {4, "IV"},
        {9, "IX"},
        {40, "XL"},
        {90, "XC"},
        {400, "CD"},
        {900, "CM"}
    };

    unordered_map <int, char> general{
        {1, 'I'},
        {5, 'V'},
        {10, 'X'},
        {50, 'L'},
        {100, 'C'},
        {500, 'D'},
        {1000, 'M'}
    };

    if (special.find(a) != special.end()) return special[a];
    int div = base * 5;
    if (a == div) return string(1, general[a]);
    else if (a < div) return string(a / base, general[base]);
    else return general[div] + string((a - div) / base, general[base]);

}

string intToRoman(int num) {

    int base{ 1 };
    int modBase{ 10 };
    string ans{};
    while (num > 0) {

        int a = num % modBase;
        num -= a;
        modBase *= 10;

        ans.insert(0, convertSimpleInt(a, base));

        base *= 10;
    }
    return ans;
}
};
