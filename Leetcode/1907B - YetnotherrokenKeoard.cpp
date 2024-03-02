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

    int t = getNumber();

    for(int j = 0; j < t; j++){
        string str = getString(), ans{};

        int bCnt{}, BCnt{}, n = str.size();

        for(int i = n - 1; i >= 0; i--){
            if(str[i] == 'b') bCnt++;
            else if(str[i] == 'B') BCnt++;
            else{
                if(isupper(str[i]) && BCnt) BCnt--;
                else if(islower(str[i]) && bCnt) bCnt--;
                else ans += str[i];
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }


}
