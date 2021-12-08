#include <map>
#include <iostream>
#include <algorithm>


int main() {
    int N;
    int repeat = 0;
    std::cin >> N;
    std::map<int, int> MAP;
    for (auto i = 1; i <= N; i++){
        std::cin >> MAP[i];
    }
    std::sort(MAP.begin(),MAP.end());
    for (auto i = 1; i <= N; i++){
        std::cout << MAP[i];
        if (MAP[i] == MAP[i+1]){
        repeat++;
        }
    }
    std::cout << repeat;
}