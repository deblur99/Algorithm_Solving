#include <iostream>

int sum(int n) {
    if (n == 1) return n;

    return n + sum(n - 1);
}

int main() {
    int n;

    std::cin >> n;

    if (n < 1 || n > 10000) return 0;

    std::cout << sum(n) << std::endl;

    return 0;
}