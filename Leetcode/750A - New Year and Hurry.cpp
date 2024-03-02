#include <iostream>
#include <cstdio>
#include <vector>
#include <istream>
#include <sstream>
#include <limits>
#include <algorithm>
#include <unordered_set>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <math.h>
#include <limits.h>

using namespace std;

string getString(){
    string inputLine{};

    getline(cin >> ws, inputLine);
    return inputLine;
}

vector<long long int> getLongLongArr(){
    string inputLine = getString();

    istringstream iss(inputLine);
    vector<long long int> arr{};

    long long int num{};

    while(iss >> num) arr.push_back(num);

    return arr;
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

double getDouble(){
    double a{};
    scanf("%lf", &a);
    return a;
}

vector<string> getStringArr(int n){
    vector<string> arr{};
    for(int i = 0; i < n; i++){
        arr.push_back(getString());
    }
    return arr;
}

vector<vector<int>> getInt2DArr(int n){
    vector<vector<int>> arr{};
    for(int i = 0; i < n; i++){
        arr.push_back(getIntArr());
    }
    return arr;
}

void printArr(vector<int>& arr){
    for(auto i : arr){
        std::cout << i << ' ';
    }
}



int main() {

    int n = getNumber(), k = getNumber(),
        maxTime = 240 - k;

    if(maxTime < 0) cout << 0;

    int L = 1, R = min(n, 9);

    while(L + 1 < R){

        int m = (R - L)/2 + L,
            problemTime = (5 + 5 * m) / 2.0 * m;

        if(problemTime > maxTime) R = m - 1;
        else L = m;

    }

    if((5 + 5 * R) / 2.0 * R <= maxTime) cout << R;
    else if((5 + 5 * L) / 2.0 * L <= maxTime) cout << L;
    else cout << 0;

}
