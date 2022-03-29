#include <iostream>

#define LIMIT 1000

int main() {
    int x, y;

    std::cin >> x >> y;

    if (x < -LIMIT || x > LIMIT || x == 0) {
        return 0;
    }

    if (y < -LIMIT || y > LIMIT || y == 0) {
        return 0;
    }

    if (x > 0 && y > 0) std::cout << "1" << std::endl;

    if (x < 0 && y > 0) std::cout << "2" << std::endl;

    if (x < 0 && y < 0) std::cout << "3" << std::endl;

    if (x > 0 && y < 0) std::cout << "4" << std::endl;

    return 0;
}