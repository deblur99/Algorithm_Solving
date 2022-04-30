#include <iostream>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int n;

    std::cin >> n;

    if (n < 1 || n > 100) return 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}