#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::deque <int> numbers;
    numbers.push_back(333);
    numbers.push_front(222);
    numbers.push_front(111);
    numbers.push_front(100);
    numbers.pop_front();

    for(auto i = 0u; i < numbers.size(); i++) {
    std::cout << numbers[i] << ' ';
    }
    std::cout << std::endl;
    std::cout << numbers.front() << std::endl;
    std::cout << numbers.back()<< std::endl;
    std::cout << numbers.size();
    return 0;
}
