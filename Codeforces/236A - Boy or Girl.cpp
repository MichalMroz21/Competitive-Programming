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

    unordered_set<char> st{};

    for(auto i : str) st.insert(i);

    cout << (st.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

}
