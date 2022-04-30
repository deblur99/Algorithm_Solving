#include <iostream>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int n;

    std::cin >> n;

    if (n < 1 || n > 100000) return 0;

    for (int i = 1; i <= n; i++) {
        std::cout << i << "\n"; // endl 말고 이거 쓰는거 까먹지 말자
    }

    return 0;
}