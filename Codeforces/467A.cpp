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

    int n = getNumber();
    
    vector<vector<int>> rooms = getInt2DArr(n);
    
    int ans{};
    
    for(auto& room : rooms){
        if(room[1] - room[0] >= 2) ans++;
    }
    
    cout << ans;
}
