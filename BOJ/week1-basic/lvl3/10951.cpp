#include <iostream>

int main() {
    int a, b;

    while (true) {
        std::cin >> a >> b;
        if (std::cin.eof()) {
            return 0;
        }

        if (a <= 0 || a >= 10) {
            return 0;
        }

        if (b <= 0 || b >= 10) {
            return 0;
        }

        std::cout << a + b << std::endl;
    }

    return 0;
}