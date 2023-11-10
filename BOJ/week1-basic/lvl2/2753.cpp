#include <iostream>

int main() {
    int year;

    std::cin >> year;

    if (year < 1 || year > 4000) {
        return 0;
    }

    // 1) 4의 배수이면서 100의 배수가 아닐 때
    // 2) 400의 배수일 때
    std::cout << (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) << std::endl;

    return 0;
}