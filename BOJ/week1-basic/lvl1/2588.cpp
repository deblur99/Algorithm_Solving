#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    // exception
    if (a < 100 || a > 999) {
        return 0;
    }

    if (b < 100 || b > 999) {
        return 0;
    }

    // check < 10
    std::cout << a * (b % 10) << std::endl;

    // check >= 10 && < 100
    std::cout << a * ((b / 10) % 10) << std::endl;

    // check >= 100 && < 1000
    std::cout << a * ((b / 100) % 10) << std::endl;

    // check result
    std::cout << a * b << std::endl;

    return 0;
}