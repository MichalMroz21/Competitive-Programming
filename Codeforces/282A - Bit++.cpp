#include <iostream>
#include <cstdio>
#include <vector>
#include <istream>
#include <sstream>
#include <limits>

std::vector<int> readIntArr(){

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string inputLine{};

    std::getline(std::cin, inputLine);

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

std::string readString(){
    std::string str{};
    std::cin >> str;
    return str;
}

std::vector<std::string> readStringArr(int n){
    std::vector<std::string> arr{};
    for(int i = 0; i < n; i++){
        arr.push_back(readString());
    }
    return arr;
}

int main() {

    int n = readNumber();
    std::vector<std::string> ops = readStringArr(n);

    int ans{};

    for(int i = 0; i < n; i++){
        if(ops[i].find('+') != -1) ans++;
        else ans--;
    }

    std::cout << ans;
}
