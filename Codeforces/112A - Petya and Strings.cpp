#include <iostream>
#include <cstdio>
#include <vector>
#include <istream>
#include <sstream>
#include <limits>

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

int main() {

    std::string str1 = readString(), str2 = readString();

    int ans{};

    int n = str1.size();

    for(int i = 0; i < n; i++){
        if(tolower(str1[i]) > tolower(str2[i])){
            ans = 1;
            break;
        }
        else if(tolower(str1[i]) < tolower(str2[i])){
            ans = -1;
            break;
        }
    }

    std::cout << ans;
}
