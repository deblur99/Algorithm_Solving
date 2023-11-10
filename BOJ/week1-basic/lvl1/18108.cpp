#include <iostream>

int main() {
    const int yearGap = 2541 - 1998;

    int year;

    std::cin >> year;

    std::cout << year - yearGap << std::endl;

    return 0;
}