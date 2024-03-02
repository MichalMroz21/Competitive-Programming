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

int main() {

    int n = readNumber(), k = readNumber();

    std::vector<int> arr = readIntArr();

    int ans{};

    for(int i = 0; i < n; i++){
        ans += (arr[i] >= arr[k - 1] && arr[i]);
    }

    std::cout << ans;
}
