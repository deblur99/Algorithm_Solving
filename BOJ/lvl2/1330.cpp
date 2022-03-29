#include <iostream>

#define LIMIT 10000

int main() {
    int a, b;

    std::cin >> a >> b;

    if (a < -LIMIT || a > LIMIT) {
        return 0;
    }

    if (b < -LIMIT || b > LIMIT) {
        return 0;
    }

    if (a > b) {
        std::cout << ">" << std::endl;
    } else if (a < b) {
        std::cout << "<" << std::endl;
    } else {
        std::cout << "==" << std::endl;
    }

    return 0;
}