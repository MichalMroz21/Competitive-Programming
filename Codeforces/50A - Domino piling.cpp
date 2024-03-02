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

    int m = readNumber(), n = readNumber();

    if(m % 2 == 0){
        std::cout << (m / 2) * n;
    }
    else if(n % 2 == 0){
        std::cout << (n / 2) * m;
    }
    else{
        std::cout << ((n - 1) / 2) * m + m / 2;
    }

}
