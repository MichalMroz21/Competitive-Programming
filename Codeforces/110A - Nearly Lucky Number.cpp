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

long long int getNumber(){
    long long int a{};
    scanf("%lld", &a);
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

    long long int a = getNumber();

    int cnt{};

    while(a){
        if(a % 10 == 4 || a % 10 == 7) cnt++;
        a /= 10;
    }

    bool isLucky = (cnt != 0);

    while(cnt){
        if((cnt % 10 != 4) && (cnt % 10 != 7)) {isLucky = false; break;}
        cnt /= 10;
    }

    cout << (isLucky ? "YES" : "NO");
}
