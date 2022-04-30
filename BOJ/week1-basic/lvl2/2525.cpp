#include <iostream>

int main() {
    int A, B, C;

    std::cin >> A >> B >> C;

    if (A < 0 || A > 23) return 0;
    if (B < 0 || B > 59) return 0;
    if (C < 0 || C > 1000) return 0;

    A += (B + C) / 60;  // hrs
    B = (B + C) % 60;   // mins

    if (A >= 24) {
        A %= 24;
    }

    std::cout << A << " " << B << std::endl;

    return 0;
}