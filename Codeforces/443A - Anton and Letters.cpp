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

using namespace std;

void setup(){
    ios::sync_with_stdio(0);
    cin.tie(0);
}

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

void printArr(vector<int>& arr){
    for(auto i : arr){
        std::cout << i << ' ';
    }
}

int main() {
    setup();

    string str = getString();
    
    unordered_set<char> st{};
    
    for(auto i : str){
        if(isalpha(i)) st.insert(i);
    }
    
    cout << st.size();
}
