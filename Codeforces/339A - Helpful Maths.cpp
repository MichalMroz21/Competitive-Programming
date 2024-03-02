#include <iostream>
#include <cstdio>
#include <vector>
#include <istream>
#include <sstream>
#include <limits>
#include <algorithm>

std::string readString(){
    std::string inputLine{};

    std::getline(std::cin >> std::ws, inputLine);
    return inputLine;
}

std::vector<int> readIntArr(){

    std::string inputLine = readString();

    std::istringstream iss(inputLine);
    std::vector<int> arr{};

    int num{};

    while(iss >> num) arr.push_back(num);

    return arr;
}

int readNumber(){
    int a{};
    scanf("%d", &a);
    return a;
}

std::vector<std::string> readStringArr(int n){
    std::vector<std::string> arr{};
    for(int i = 0; i < n; i++){
        arr.push_back(readString());
    }
    return arr;
}

using namespace std;

int main() {

    std::string sm = readString();

    std::vector<int> nums{};

    for(int i = 0; i < sm.size(); i++){
        if(sm[i] != '+') nums.push_back(sm[i] - '0');
    }

    std::sort(nums.begin(), nums.end());

    int j{};

    for(auto& i : sm){
        if(i != '+'){
            i = nums[j++] + '0';
        }
    }

    cout << sm;
}
