#include <iostream>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int n;
    int a, b;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;

        if (a <= 0 || a >= 10) {
            return 0;
        }

        if (b <= 0 || b >= 10) {
            return 0;
        }

        std::cout << "Case #" << i + 1 << ": " << a << " + " << b
            << " = " << a + b << "\n";
    }

    return 0;
}