#include <iostream>
#include <cstdio>
#include <vector>
#include <istream>
#include <sstream>
#include <limits>
#include <algorithm>
#include <unordered_set>

using namespace std;

string getString(){
    string inputLine{};

    getline(cin >> ws, inputLine);
    return inputLine;
}

vector<int> getIntArr(){

    string inputLine = getString();

    istringstream iss(inputLine);
    vector<int> arr{};

    int num{};

    while(iss >> num) arr.push_back(num);

    return arr;
}

int getNumber(){
    int a{};
    scanf("%d", &a);
    return a;
}

vector<string> getStringArr(int n){
    vector<string> arr{};
    for(int i = 0; i < n; i++){
        arr.push_back(getString());
    }
    return arr;
}


int main() {

    string str = getString();

    int lc{}, uc{};

    for(auto i : str){
        lc += islower(i) ? 1 : 0;
        uc += isupper(i) ? 1 : 0;
    }

    transform(str.begin(), str.end(), str.begin(), [uc, lc](char a){return lc >= uc ? tolower(a) : toupper(a); });

    cout << str;
}
