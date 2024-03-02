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


int main() {

    int a = getNumber();

    while(true){

        ++a;
        int cp = a;
        unordered_set<int> st{};
        bool isDistinct = true;
        while(cp){
            if(st.find(cp % 10) != st.end()) isDistinct = false;
            st.insert(cp % 10);
            cp /= 10;
        }

        if(isDistinct) break;
    }

    cout << a;
}
